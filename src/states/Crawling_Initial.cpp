#include "Crawling_Initial.h"

#include "../Crawling.h"

void Crawling_Initial::configure(const mc_rtc::Configuration & config)
{
}

void Crawling_Initial::start(mc_control::fsm::Controller & ctl_)
{
  auto & ctl = static_cast<Crawling &>(ctl_);
}

bool Crawling_Initial::run(mc_control::fsm::Controller & ctl_)
{
  auto & ctl = static_cast<Crawling &>(ctl_);
  output("OK");
  return true;
}

void Crawling_Initial::teardown(mc_control::fsm::Controller & ctl_)
{
  auto & ctl = static_cast<Crawling &>(ctl_);
}

EXPORT_SINGLE_STATE("Crawling_Initial", Crawling_Initial)
