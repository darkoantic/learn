<?php
/**
 * @file
 * install_drupal.default_ladder.inc
 */

/**
 * Implements hook_default_ladder().
 */
function install_drupal_default_ladder() {
  $export = array();

  $rung = new stdClass;
  $rung->disabled = FALSE; /* Edit this to true to make a default rung disabled initially */
  $rung->api_version = 1;
  $rung->ladder = 'drupal';
  $rung->name = 'install_drupal';
  $rung->title = 'Install Drupal locally';
  $rung->description = 'Set up Drupal on your personal computer';
  $rung->lesson = 'install_drupal';
  $rung->css_class = 'ladder-in-development';
  $rung->weight = 140;
  $export['install_drupal'] = $rung;

  return $export;
}
