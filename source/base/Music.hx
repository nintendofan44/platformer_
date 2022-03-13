package base;

import base.MusicSection.SwagSection;

using StringTools;

typedef SwagSong =
{
	var song:String;
    var things:Array<SwagSection>;
	var bpm:Float;
}

class Music
{
	public var song:String;
    public var things:Array<SwagSection>;
	public var bpm:Float;

	public function new(song, things, bpm)
	{
		this.song = song;
        this.things = things;
		this.bpm = bpm;
	}
}
