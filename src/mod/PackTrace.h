#pragma once

namespace trucos {

// Rastreador de llamadas a las clases de packs. No modifica el comportamiento del juego.
class PackTrace {
  public:
    static int install(); // devuelve cuantas funciones se engancharon (-1 si no hay base)
    static int hookedCount();
    static int totalCount();
    static void setEnabled(bool on);
};

} // namespace trucos
