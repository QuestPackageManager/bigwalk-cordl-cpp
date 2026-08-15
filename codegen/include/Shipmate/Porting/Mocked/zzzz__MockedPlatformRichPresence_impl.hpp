#pragma once
// IWYU pragma private; include "Shipmate/Porting/Mocked/MockedPlatformRichPresence.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformRichPresence_impl.hpp"
#include "Shipmate/Porting/Mocked/zzzz__MockedPlatformRichPresence_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "GlobalNamespace/zzzz__RichPresenceEntry_def.hpp"
//  Writing Method size for method: ::Shipmate::Porting::Mocked::MockedPlatformRichPresence.SetPresenceText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::Shipmate::Porting::Mocked::MockedPlatformRichPresence::*)(::GlobalNamespace::RichPresenceEntry*)>(&::Shipmate::Porting::Mocked::MockedPlatformRichPresence::SetPresenceText)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181ac6190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformRichPresence*>(),
                    {::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformRichPresence*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::Mocked::MockedPlatformRichPresence._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::Mocked::MockedPlatformRichPresence::*)()>(&::Shipmate::Porting::Mocked::MockedPlatformRichPresence::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181ac9840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformRichPresence*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Cysharp::Threading::Tasks::UniTask Shipmate::Porting::Mocked::MockedPlatformRichPresence::SetPresenceText(::GlobalNamespace::RichPresenceEntry*  aPresence)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformRichPresence*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method, aPresence);
}
inline void Shipmate::Porting::Mocked::MockedPlatformRichPresence::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformRichPresence*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Shipmate::Porting::Mocked::MockedPlatformRichPresence* Shipmate::Porting::Mocked::MockedPlatformRichPresence::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmate::Porting::Mocked::MockedPlatformRichPresence*>());
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::Mocked::MockedPlatformRichPresence::MockedPlatformRichPresence()   {
}
