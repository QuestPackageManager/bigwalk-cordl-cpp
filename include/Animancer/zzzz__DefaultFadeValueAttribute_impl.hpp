#pragma once
// IWYU pragma private; include "Animancer/DefaultFadeValueAttribute.hpp"
#include "Animancer/zzzz__DefaultValueAttribute_impl.hpp"
#include "Animancer/zzzz__DefaultFadeValueAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Animancer::DefaultFadeValueAttribute.get_Primary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Animancer::DefaultFadeValueAttribute::*)()>(&::Animancer::DefaultFadeValueAttribute::get_Primary)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180308460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::DefaultFadeValueAttribute*>(),
                    {::i2c::class_of<::Animancer::DefaultFadeValueAttribute*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DefaultFadeValueAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::DefaultFadeValueAttribute::*)()>(&::Animancer::DefaultFadeValueAttribute::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180308410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DefaultFadeValueAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Object* Animancer::DefaultFadeValueAttribute::get_Primary()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::DefaultFadeValueAttribute*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Animancer::DefaultFadeValueAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DefaultFadeValueAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::DefaultFadeValueAttribute* Animancer::DefaultFadeValueAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::DefaultFadeValueAttribute*>());
}
// Ctor Parameters []
constexpr ::Animancer::DefaultFadeValueAttribute::DefaultFadeValueAttribute()   {
}
