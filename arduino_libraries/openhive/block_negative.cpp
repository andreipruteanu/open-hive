/*
Copyright (c) 2014, Andrei Pruteanu
All rights reserved.

Code is an open source version of HiveKit by Hive-Systems created by 
Andrei Pruteanu, Stefan Dulman and Tomasz Jaskiewicz.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

* Redistributions of source code must retain the above copyright notice, this
  list of conditions and the following disclaimer.

* Redistributions in binary form must reproduce the above copyright notice,
  this list of conditions and the following disclaimer in the documentation
  and/or other materials provided with the distribution.

* Neither the name of "Open Hive" nor the names of its
  contributors may be used to endorse or promote products derived from
  this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#include "types.h"
#include "logging.h"
#include "block_negative.h"

// constructor
BlockNegative::BlockNegative(runtimeState_t* runtimeState_, uint16_t blockId_) {
	runtimeState = runtimeState_;
	blockId      = blockId_;
}

// do the actual operation
void BlockNegative::out(void) {
    LOG(LOG_SUB, 2,"NEG Execute");

    // retrieve ports and signals pointers from the script datastructure
    float* signals = scriptHandler->getSignals();
    ports_t* ports = scriptHandler->getPorts();

    float in = signals[ports[blockId].in[0]];

    signals[ports[blockId].out[0]] = -in;

    LOG(LOG_SUB, 1,"NEG in=%f out=%f",in,signals[ports[blockId].out[0]]);
}

// dummy functions needed because of derivation from abstract base class
void BlockNegative::in(void) { }
void BlockNegative::step(void) { }
void BlockNegative::deallocate(void) { }

