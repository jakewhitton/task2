#ifndef OBSERVER_H
#define OBSERVER_H

#include "node.h"
#include "task/position.h"

class Observer : private Node {
private:
	// Used to receive messages from Runners
	ros::Subscriber subscriber;

	// Used to publish messages to rviz
	ros::Publisher publisher;

	// Timing
	const int frequency = 10;
	ros::Rate timer = ros::Rate(frequency);

	void run();
	void loop();

	// Static callback
	static void callback(const task::position::ConstPtr & message);
public:
	Observer(int argc, char ** argv, const char * node_name);
};

#endif
