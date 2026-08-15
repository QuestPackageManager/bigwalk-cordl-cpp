#pragma once
// IWYU pragma private; include "Shipmate/Porting/Mocked/MockedPlatformAchievements.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformAchievements_impl.hpp"
#include "Shipmate/Porting/Mocked/zzzz__MockedPlatformAchievements_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "Shipmate/Porting/zzzz__EPlatformAchievement_def.hpp"
//  Writing Method size for method: ::Shipmate::Porting::Mocked::MockedPlatformAchievements.UnlockAchievement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::Shipmate::Porting::Mocked::MockedPlatformAchievements::*)(::Shipmate::Porting::EPlatformAchievement*)>(&::Shipmate::Porting::Mocked::MockedPlatformAchievements::UnlockAchievement)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181ac6190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformAchievements*>(),
                    {::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformAchievements*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::Mocked::MockedPlatformAchievements.SetAchievementProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::Shipmate::Porting::Mocked::MockedPlatformAchievements::*)(::Shipmate::Porting::EPlatformAchievement*, int32_t)>(&::Shipmate::Porting::Mocked::MockedPlatformAchievements::SetAchievementProgress)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181ac6190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformAchievements*>(),
                    {::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformAchievements*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::Mocked::MockedPlatformAchievements._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::Mocked::MockedPlatformAchievements::*)()>(&::Shipmate::Porting::Mocked::MockedPlatformAchievements::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181ac9820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformAchievements*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Cysharp::Threading::Tasks::UniTask Shipmate::Porting::Mocked::MockedPlatformAchievements::UnlockAchievement(::Shipmate::Porting::EPlatformAchievement*  aAchievement)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformAchievements*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method, aAchievement);
}
inline ::Cysharp::Threading::Tasks::UniTask Shipmate::Porting::Mocked::MockedPlatformAchievements::SetAchievementProgress(::Shipmate::Porting::EPlatformAchievement*  aAchievement, int32_t  aProgress)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformAchievements*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method, aAchievement, aProgress);
}
inline void Shipmate::Porting::Mocked::MockedPlatformAchievements::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlatformAchievements*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Shipmate::Porting::Mocked::MockedPlatformAchievements* Shipmate::Porting::Mocked::MockedPlatformAchievements::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmate::Porting::Mocked::MockedPlatformAchievements*>());
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::Mocked::MockedPlatformAchievements::MockedPlatformAchievements()   {
}
