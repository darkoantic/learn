<?php
/**
 * @file
 * write_tests.default_ladder.inc
 */

/**
 * Implements hook_default_ladder().
 */
function write_tests_default_ladder() {
  $export = array();

  $rung = new stdClass;
  $rung->disabled = FALSE; /* Edit this to true to make a default rung disabled initially */
  $rung->api_version = 1;
  $rung->ladder = 'drupal';
  $rung->name = 'write_tests';
  $rung->title = 'Write tests';
  $rung->description = '';
  $rung->lesson = 'write_tests';
  $rung->css_class = 'ladder-in-development';
  $rung->weight = 60;
  $export['write_tests'] = $rung;

  return $export;
}
