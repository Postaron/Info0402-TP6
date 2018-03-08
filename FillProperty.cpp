#include "FillProperty.hpp"

const Color &FillProperty::getCouleur() const {
    return couleur;
}

void FillProperty::setCouleur(const Color &couleur) {
    this->couleur = couleur;
}

FillProperty::FillProperty(const Color &couleur) {
    this->couleur = couleur;
}
