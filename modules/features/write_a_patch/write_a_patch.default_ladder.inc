<?php
/**
 * @file
 * write_a_patch.default_ladder.inc
 */

/**
 * Implements hook_default_ladder().
 */
function write_a_patch_default_ladder() {
  $export = array();

  $rung = new stdClass;
  $rung->disabled = FALSE; /* Edit this to true to make a default rung disabled initially */
  $rung->api_version = 1;
  $rung->ladder = 'drupal';
  $rung->name = 'write_a_patch';
  $rung->title = 'Write a patch';
  $rung->description = '';
  $rung->lesson = 'write_a_patch';
  $rung->css_class = 'ladder-in-development';
  $rung->weight = 100;
  $export['write_a_patch'] = $rung;

  return $export;
}
