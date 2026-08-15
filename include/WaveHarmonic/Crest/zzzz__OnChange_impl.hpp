#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/OnChange.hpp"
#include "WaveHarmonic/Crest/zzzz__Decorator_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__OnChange_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::OnChange._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::OnChange::*)(bool)>(&::WaveHarmonic::Crest::OnChange::_ctor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x180303f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::OnChange*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::OnChange._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::OnChange::*)(::System::Type*, bool)>(&::WaveHarmonic::Crest::OnChange::_ctor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x180303f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::OnChange*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::OnChange::_ctor(bool  skipIfInactive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::OnChange*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, skipIfInactive);
}
inline void WaveHarmonic::Crest::OnChange::_ctor(::System::Type*  type, bool  skipIfInactive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::OnChange*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, skipIfInactive);
}
inline ::WaveHarmonic::Crest::OnChange* WaveHarmonic::Crest::OnChange::New_ctor(bool  skipIfInactive)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::OnChange*>(skipIfInactive));
}
inline ::WaveHarmonic::Crest::OnChange* WaveHarmonic::Crest::OnChange::New_ctor(::System::Type*  type, bool  skipIfInactive)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::OnChange*>(type, skipIfInactive));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::OnChange::OnChange()   {
}
