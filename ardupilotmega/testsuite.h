/** @file
 *    @brief MAVLink comm protocol testsuite generated from bioair.xml
 *    @see http://qgroundcontrol.org/mavlink/
 */
#pragma once
#ifndef BIOAIR_TESTSUITE_H
#define BIOAIR_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL
static void mavlink_test_common(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_ardupilotmega(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_bioair(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_common(system_id, component_id, last_msg);
    mavlink_test_ardupilotmega(system_id, component_id, last_msg);
    mavlink_test_bioair(system_id, component_id, last_msg);
}
#endif

#include "../common/testsuite.h"
#include "../ardupilotmega/testsuite.h"


static void mavlink_test_bioair_configurations(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_BIOAIR_CONFIGURATIONS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_bioair_configurations_t packet_in = {
        17.0,45.0,73.0,101.0,129.0,157.0,963498712,213.0,241.0,269.0,297.0,325.0,353.0,381.0,409.0,437.0,197,8,75,142,209
    };
    mavlink_bioair_configurations_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.origin_north = packet_in.origin_north;
        packet1.origin_east = packet_in.origin_east;
        packet1.origin_down = packet_in.origin_down;
        packet1.dest_north = packet_in.dest_north;
        packet1.dest_east = packet_in.dest_east;
        packet1.dest_down = packet_in.dest_down;
        packet1.min_relative_alt = packet_in.min_relative_alt;
        packet1.sig_high = packet_in.sig_high;
        packet1.sig_low = packet_in.sig_low;
        packet1.sig_gamma = packet_in.sig_gamma;
        packet1.sig_alpha = packet_in.sig_alpha;
        packet1.sig_beta = packet_in.sig_beta;
        packet1.virtual_a = packet_in.virtual_a;
        packet1.repulsor = packet_in.repulsor;
        packet1.target_proximity = packet_in.target_proximity;
        packet1.target_force = packet_in.target_force;
        packet1.node_id = packet_in.node_id;
        packet1.origin_id = packet_in.origin_id;
        packet1.dest_id = packet_in.dest_id;
        packet1.node_state = packet_in.node_state;
        packet1.tentacle_state = packet_in.tentacle_state;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_BIOAIR_CONFIGURATIONS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_BIOAIR_CONFIGURATIONS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_bioair_configurations_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_bioair_configurations_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_bioair_configurations_pack(system_id, component_id, &msg , packet1.node_id , packet1.origin_id , packet1.dest_id , packet1.node_state , packet1.tentacle_state , packet1.origin_north , packet1.origin_east , packet1.origin_down , packet1.dest_north , packet1.dest_east , packet1.dest_down , packet1.min_relative_alt , packet1.sig_high , packet1.sig_low , packet1.sig_gamma , packet1.sig_alpha , packet1.sig_beta , packet1.virtual_a , packet1.repulsor , packet1.target_proximity , packet1.target_force );
    mavlink_msg_bioair_configurations_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_bioair_configurations_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.node_id , packet1.origin_id , packet1.dest_id , packet1.node_state , packet1.tentacle_state , packet1.origin_north , packet1.origin_east , packet1.origin_down , packet1.dest_north , packet1.dest_east , packet1.dest_down , packet1.min_relative_alt , packet1.sig_high , packet1.sig_low , packet1.sig_gamma , packet1.sig_alpha , packet1.sig_beta , packet1.virtual_a , packet1.repulsor , packet1.target_proximity , packet1.target_force );
    mavlink_msg_bioair_configurations_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_bioair_configurations_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_bioair_configurations_send(MAVLINK_COMM_1 , packet1.node_id , packet1.origin_id , packet1.dest_id , packet1.node_state , packet1.tentacle_state , packet1.origin_north , packet1.origin_east , packet1.origin_down , packet1.dest_north , packet1.dest_east , packet1.dest_down , packet1.min_relative_alt , packet1.sig_high , packet1.sig_low , packet1.sig_gamma , packet1.sig_alpha , packet1.sig_beta , packet1.virtual_a , packet1.repulsor , packet1.target_proximity , packet1.target_force );
    mavlink_msg_bioair_configurations_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_bioair_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_BIOAIR_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_bioair_status_t packet_in = {
        5,72,139,206
    };
    mavlink_bioair_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.target_system = packet_in.target_system;
        packet1.target_component = packet_in.target_component;
        packet1.node_id = packet_in.node_id;
        packet1.node_state = packet_in.node_state;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_BIOAIR_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_BIOAIR_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_bioair_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_bioair_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_bioair_status_pack(system_id, component_id, &msg , packet1.target_system , packet1.target_component , packet1.node_id , packet1.node_state );
    mavlink_msg_bioair_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_bioair_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system , packet1.target_component , packet1.node_id , packet1.node_state );
    mavlink_msg_bioair_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_bioair_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_bioair_status_send(MAVLINK_COMM_1 , packet1.target_system , packet1.target_component , packet1.node_id , packet1.node_state );
    mavlink_msg_bioair_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_bioair(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_bioair_configurations(system_id, component_id, last_msg);
    mavlink_test_bioair_status(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // BIOAIR_TESTSUITE_H
