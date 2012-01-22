#!/bin/bash
echo "Rebuilding Learn Drupal..."
rm -Rf modules/contrib themes/ libraries
drush -y make --working-copy --no-core --contrib-destination=. learn_drupal.make
