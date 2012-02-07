<?php
/**
 * @file
 * issue_teams.default_ladder.inc
 */

/**
 * Implements hook_default_ladder().
 */
function issue_teams_default_ladder() {
  $export = array();

  $rung = new stdClass;
  $rung->disabled = FALSE; /* Edit this to true to make a default rung disabled initially */
  $rung->api_version = 1;
  $rung->ladder = 'drupal';
  $rung->name = 'create_an_issue_team';
  $rung->title = 'Create an issue team to work on an issue in the queue';
  $rung->description = '';
  $rung->lesson = 'create_an_issue_team';
  $rung->css_class = 'ladder-in-development';
  $rung->weight = 80;
  $export['create_an_issue_team'] = $rung;

  $rung = new stdClass;
  $rung->disabled = FALSE; /* Edit this to true to make a default rung disabled initially */
  $rung->api_version = 1;
  $rung->ladder = 'drupal';
  $rung->name = 'join_an_issue_team';
  $rung->title = 'Join an issue team to work on an issue in the queue';
  $rung->description = '';
  $rung->lesson = 'join_an_issue_team';
  $rung->css_class = 'ladder-in-development';
  $rung->weight = 85;
  $export['join_an_issue_team'] = $rung;

  return $export;
}
