#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/Connector.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__Connector_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__RoadConfig_def.hpp"
//  Writing Method size for method: ::JBooth::MicroVerseCore::Connector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::Connector::*)()>(&::JBooth::MicroVerseCore::Connector::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814063c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Connector*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::JBooth::MicroVerseCore::RoadConfig>& JBooth::MicroVerseCore::Connector::__cordl_internal_get_config()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___config;
}
constexpr ::UnityW<::JBooth::MicroVerseCore::RoadConfig> const& JBooth::MicroVerseCore::Connector::__cordl_internal_get_config() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___config;
}
constexpr void JBooth::MicroVerseCore::Connector::__cordl_internal_set_config(::UnityW<::JBooth::MicroVerseCore::RoadConfig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___config = value;
}
constexpr ::UnityEngine::Color& JBooth::MicroVerseCore::Connector::__cordl_internal_get_color()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___color;
}
constexpr ::UnityEngine::Color const& JBooth::MicroVerseCore::Connector::__cordl_internal_get_color() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___color;
}
constexpr void JBooth::MicroVerseCore::Connector::__cordl_internal_set_color(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___color = value;
}
inline void JBooth::MicroVerseCore::Connector::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Connector*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::Connector* JBooth::MicroVerseCore::Connector::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::Connector*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::Connector::Connector()   {
}
