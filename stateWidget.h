#include <gtkmm/drawingarea.h>
#include "drawState.h"

class StateWidget : public Gtk::DrawingArea {
public:
  StateWidget ();
	void set_state(State *state);
	void force_redraw ();
protected:
  virtual bool on_expose_event(GdkEventExpose* event);
private:
	State *state;
};