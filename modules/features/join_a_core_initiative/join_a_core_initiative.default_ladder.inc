<?php
/**
 * @file
 * join_a_core_initiative.default_ladder.inc
 */

/**
 * Implements hook_default_ladder().
 */
function join_a_core_initiative_default_ladder() {
  $export = array();

  $rung = new stdClass;
  $rung->disabled = FALSE; /* Edit this to true to make a default rung disabled initially */
  $rung->api_version = 1;
  $rung->ladder = 'drupal';
  $rung->name = 'join_a_core_initiative';
  $rung->title = 'Join a core initiative';
  $rung->description = '';
  $rung->lesson = 'join_a_core_initiative';
  $rung->css_class = 'ladder-in-development';
  $rung->weight = 10;
  $export['join_a_core_initiative'] = $rung;

  return $export;
}
