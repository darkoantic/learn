<?php
/**
 * @file
 * core_office_hours.default_ladder.inc
 */

/**
 * Implements hook_default_ladder().
 */
function core_office_hours_default_ladder() {
  $export = array();

  $rung = new stdClass;
  $rung->disabled = FALSE; /* Edit this to true to make a default rung disabled initially */
  $rung->api_version = 1;
  $rung->ladder = 'drupal';
  $rung->name = 'core_office_hours';
  $rung->title = 'Help answer questions during core IRC office hours';
  $rung->description = '';
  $rung->lesson = 'core_office_hours';
  $rung->css_class = 'ladder-in-development';
  $rung->weight = 40;
  $export['core_office_hours'] = $rung;

  return $export;
}
