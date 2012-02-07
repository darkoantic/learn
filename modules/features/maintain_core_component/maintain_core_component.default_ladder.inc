<?php
/**
 * @file
 * maintain_core_component.default_ladder.inc
 */

/**
 * Implements hook_default_ladder().
 */
function maintain_core_component_default_ladder() {
  $export = array();

  $rung = new stdClass;
  $rung->disabled = FALSE; /* Edit this to true to make a default rung disabled initially */
  $rung->api_version = 1;
  $rung->ladder = 'drupal';
  $rung->name = 'maintain_core_component';
  $rung->title = 'Help maintain a core component';
  $rung->description = '';
  $rung->lesson = 'maintain_core_component';
  $rung->css_class = 'ladder-in-development';
  $rung->weight = 20;
  $export['maintain_core_component'] = $rung;

  return $export;
}
