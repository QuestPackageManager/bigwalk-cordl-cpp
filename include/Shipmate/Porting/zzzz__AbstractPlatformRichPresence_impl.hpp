#pragma once
// IWYU pragma private; include "Shipmate/Porting/AbstractPlatformRichPresence.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformLogic_impl.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformRichPresence_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "GlobalNamespace/zzzz__RichPresenceEntry_def.hpp"
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformRichPresence.SetPresenceText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::Shipmate::Porting::AbstractPlatformRichPresence::*)(::GlobalNamespace::RichPresenceEntry*)>(&::Shipmate::Porting::AbstractPlatformRichPresence::SetPresenceText)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::AbstractPlatformRichPresence*>(),
                    {::i2c::class_of<::Shipmate::Porting::AbstractPlatformRichPresence*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformRichPresence._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformRichPresence::*)()>(&::Shipmate::Porting::AbstractPlatformRichPresence::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181ac5230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformRichPresence*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Cysharp::Threading::Tasks::UniTask Shipmate::Porting::AbstractPlatformRichPresence::SetPresenceText(::GlobalNamespace::RichPresenceEntry*  aPresence)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::AbstractPlatformRichPresence*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method, aPresence);
}
inline void Shipmate::Porting::AbstractPlatformRichPresence::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformRichPresence*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Shipmate::Porting::AbstractPlatformRichPresence* Shipmate::Porting::AbstractPlatformRichPresence::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmate::Porting::AbstractPlatformRichPresence*>());
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::AbstractPlatformRichPresence::AbstractPlatformRichPresence()   {
}
