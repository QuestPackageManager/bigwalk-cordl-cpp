#pragma once
// IWYU pragma private; include "Enviro/EnviroQualities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Enviro/zzzz__EnviroQualities_def.hpp"
#include "Enviro/zzzz__EnviroQuality_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroQualities._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroQualities::*)()>(&::Enviro::EnviroQualities::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180615bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroQualities*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Enviro::EnviroQuality>& Enviro::EnviroQualities::__cordl_internal_get_defaultQuality()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultQuality;
}
constexpr ::UnityW<::Enviro::EnviroQuality> const& Enviro::EnviroQualities::__cordl_internal_get_defaultQuality() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultQuality;
}
constexpr void Enviro::EnviroQualities::__cordl_internal_set_defaultQuality(::UnityW<::Enviro::EnviroQuality>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultQuality = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Enviro::EnviroQuality>>*& Enviro::EnviroQualities::__cordl_internal_get_Qualities()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Qualities;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Enviro::EnviroQuality>>* const& Enviro::EnviroQualities::__cordl_internal_get_Qualities() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Qualities;
}
constexpr void Enviro::EnviroQualities::__cordl_internal_set_Qualities(::System::Collections::Generic::List_1<::UnityW<::Enviro::EnviroQuality>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Qualities = value;
}
inline void Enviro::EnviroQualities::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroQualities*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroQualities* Enviro::EnviroQualities::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroQualities*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroQualities::EnviroQualities()   {
}
