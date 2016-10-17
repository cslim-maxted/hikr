package com.apps.hikr;

public class Timers {
	public XliCppThreadHandler MainThreadHandler;

    public int RegisterTimer(int delay)
    {
    	int timer_id = MainThreadHandler.registerRepeating(delay);
    	return timer_id;
    }

    public void UnregisterTimer(int timerID)
    {
    	MainThreadHandler.unregisterRepeating(timerID);
    }

}
