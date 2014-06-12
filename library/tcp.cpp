/*
Copyright (c) 2014, Andrei Pruteanu
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

* Redistributions of source code must retain the above copyright notice, this
  list of conditions and the following disclaimer.

* Redistributions in binary form must reproduce the above copyright notice,
  this list of conditions and the following disclaimer in the documentation
  and/or other materials provided with the distribution.

* Neither the name of the {organization} nor the names of its
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

#include "tcp.h"

void TCP::import(void) {
	
}

/**
 * export state to the neighbours
 **/
void TCP::exportState(void) {

}

/**
 * send a char(uint8_t) data buffer without retransmission
 * @param the buffer itself: an array of chars (uint8_t)
 * @param the buffer length
 * @param output ports
 * @param block number
 **/
uint8_t TCP::sendBuffer(uint8_t*,uint32_t,uint32_t,uint8_t,uint8_t) {

}

uint8_t TCP::sendPacket(uint8_t*, uint32_t, uint8_t, uint8_t) {

}

/**
 * The function sends a buffer to the serial port. It
 * retransmits packets in case of unsuccessful transmission.
 * @param the buffer itself: an array of chars (uint8_t)
 * @param the buffer length
 * @param last packet received by requesting node
 * @param output ports
 **/
uint8_t TCP::unicastFilePkt(uint8_t*,uint16_t,int16_t,uint8_t) {

}

/**
 * process a received message
 * @param input message
 * @param serial port number
**/
void TCP::processReceivedMessage(message_t*, uint8_t serialPortNo) {

}

/**
 * setup the algorithm
**/
void TCP::initTransport(void) {

}

/**
 * ask for a Script script
**/
void TCP::askForFile(void) {

}

/**
 * beacon a dummy message
**/
void TCP::beacon(void) {

}

/**
 * compute the checksum for the message payload
**/
uint8_t TCP::getChecksum(message_t*) {

}

void TCP::deliverSerial(message_t, uint8_t) {

}

/**
 * process the incoming script msg
 **/
void TCP::processIncomingScriptMsg(message_t *msg, uint8_t portId) {

}

void TCP::feedNbrStateMsgToAlgo(nbrStateMessage_t*) {

}

void TCP::startTimerInt() {

}

void TCP::stopTimerInt() {

}

/**
 * cleanup the TCP state
**/
void TCP::cleanupTCPstate(void) {

}


void TCP::copyUartData() {

}

void TCP::startUARTInt() {

}

void TCP::stopUARTInt() {

}

void TCP::initQueues(void) {

}

// comparison between two script versions
uint8_t TCP::isScriptVerLarger(uint8_t newsv, uint8_t oldsv) {

}

// sends signal values around
void TCP::sendSignalValue(void) {

}
