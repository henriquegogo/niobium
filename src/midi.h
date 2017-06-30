#ifndef MIDI_H
#define MIDI_H

#include <alsa/asoundlib.h>

typedef struct Midi {
    snd_seq_t *seq;
} Midi;

Midi* Midi_new();

void Midi_listen(Midi *midi, void callback(snd_seq_event_t *event));

void Midi_cleanup(Midi *midi);

#endif