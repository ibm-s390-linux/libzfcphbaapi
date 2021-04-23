/* SPDX-License-Identifier: EPL-1.0 */
/*
 * Copyright IBM Corp. 2003,2010
 *
 * Authors:		Sven Schuetz <sven@de.ibm.com>
 *
 * File:		vlib_events.h
 *
 * Description:
 * Event handling functions
 *
 */


#ifndef VLIB_EVENTS_H_
#define VLIB_EVENTS_H_

void free_event_queue(struct vlib_adapter *);
void init_event_queue(struct vlib_adapter *);
void start_event_thread();
struct vlib_event *popEvent(struct vlib_adapter *);

#endif /*VLIB_EVENTS_H_*/
