#ifndef FILLPROPERTY_H_
#define FILLPROPERTY_H_

#include "Color.hpp"

class FillProperty {
public:
    FillProperty() = default;

    explicit FillProperty(const Color &couleur);

    virtual ~FillProperty() = default;

    const Color &getCouleur() const;

    void setCouleur(const Color &couleur);

protected:
    Color couleur;
};

#endif /* FILLPROPERTY_H_ */
