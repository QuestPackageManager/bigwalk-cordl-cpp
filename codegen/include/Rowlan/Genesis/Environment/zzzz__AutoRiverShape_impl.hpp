#pragma once
// IWYU pragma private; include "Rowlan/Genesis/Environment/AutoRiverShape.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Rowlan/Genesis/Environment/zzzz__AutoRiverShape_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__SplinePath_def.hpp"
//  Writing Method size for method: ::Rowlan::Genesis::Environment::AutoRiverShape._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::Genesis::Environment::AutoRiverShape::*)()>(&::Rowlan::Genesis::Environment::AutoRiverShape::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181abd240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::Environment::AutoRiverShape*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Rowlan::Genesis::Environment::AutoRiverShape::__cordl_internal_get_continuous()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continuous;
}
constexpr bool const& Rowlan::Genesis::Environment::AutoRiverShape::__cordl_internal_get_continuous() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continuous;
}
constexpr void Rowlan::Genesis::Environment::AutoRiverShape::__cordl_internal_set_continuous(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___continuous = value;
}
constexpr bool& Rowlan::Genesis::Environment::AutoRiverShape::__cordl_internal_get_autoRefresh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoRefresh;
}
constexpr bool const& Rowlan::Genesis::Environment::AutoRiverShape::__cordl_internal_get_autoRefresh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoRefresh;
}
constexpr void Rowlan::Genesis::Environment::AutoRiverShape::__cordl_internal_set_autoRefresh(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoRefresh = value;
}
constexpr int32_t& Rowlan::Genesis::Environment::AutoRiverShape::__cordl_internal_get_riverLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___riverLength;
}
constexpr int32_t const& Rowlan::Genesis::Environment::AutoRiverShape::__cordl_internal_get_riverLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___riverLength;
}
constexpr void Rowlan::Genesis::Environment::AutoRiverShape::__cordl_internal_set_riverLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___riverLength = value;
}
constexpr int32_t& Rowlan::Genesis::Environment::AutoRiverShape::__cordl_internal_get_samplingDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___samplingDistance;
}
constexpr int32_t const& Rowlan::Genesis::Environment::AutoRiverShape::__cordl_internal_get_samplingDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___samplingDistance;
}
constexpr void Rowlan::Genesis::Environment::AutoRiverShape::__cordl_internal_set_samplingDistance(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___samplingDistance = value;
}
constexpr ::UnityW<::JBooth::MicroVerseCore::SplinePath>& Rowlan::Genesis::Environment::AutoRiverShape::__cordl_internal_get_splinePath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splinePath;
}
constexpr ::UnityW<::JBooth::MicroVerseCore::SplinePath> const& Rowlan::Genesis::Environment::AutoRiverShape::__cordl_internal_get_splinePath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splinePath;
}
constexpr void Rowlan::Genesis::Environment::AutoRiverShape::__cordl_internal_set_splinePath(::UnityW<::JBooth::MicroVerseCore::SplinePath>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___splinePath = value;
}
inline void Rowlan::Genesis::Environment::AutoRiverShape::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::Environment::AutoRiverShape*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rowlan::Genesis::Environment::AutoRiverShape* Rowlan::Genesis::Environment::AutoRiverShape::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rowlan::Genesis::Environment::AutoRiverShape*>());
}
// Ctor Parameters []
constexpr ::Rowlan::Genesis::Environment::AutoRiverShape::AutoRiverShape()   {
}
