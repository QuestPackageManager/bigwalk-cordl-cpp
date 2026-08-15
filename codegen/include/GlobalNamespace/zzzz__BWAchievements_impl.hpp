#pragma once
// IWYU pragma private; include "GlobalNamespace/BWAchievements.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BWAchievements_def.hpp"
#include "Shipmate/Porting/zzzz__EPlatformAchievement_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BWAchievements.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::BWAchievements::Initialize)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x18041c950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BWAchievements*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BWAchievements._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BWAchievements::*)()>(&::GlobalNamespace::BWAchievements::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BWAchievements*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BWAchievements::setStaticF_Drawbridge(::Shipmate::Porting::EPlatformAchievement*  value)  {
::cordl_internals::setStaticField<::Shipmate::Porting::EPlatformAchievement*, "Drawbridge", ::GlobalNamespace::BWAchievements*>(std::forward<::Shipmate::Porting::EPlatformAchievement*>(value));
}
inline ::Shipmate::Porting::EPlatformAchievement* GlobalNamespace::BWAchievements::getStaticF_Drawbridge()  {
return ::cordl_internals::getStaticField<::Shipmate::Porting::EPlatformAchievement*, "Drawbridge", ::GlobalNamespace::BWAchievements*>();
}
inline void GlobalNamespace::BWAchievements::setStaticF_Map(::Shipmate::Porting::EPlatformAchievement*  value)  {
::cordl_internals::setStaticField<::Shipmate::Porting::EPlatformAchievement*, "Map", ::GlobalNamespace::BWAchievements*>(std::forward<::Shipmate::Porting::EPlatformAchievement*>(value));
}
inline ::Shipmate::Porting::EPlatformAchievement* GlobalNamespace::BWAchievements::getStaticF_Map()  {
return ::cordl_internals::getStaticField<::Shipmate::Porting::EPlatformAchievement*, "Map", ::GlobalNamespace::BWAchievements*>();
}
inline void GlobalNamespace::BWAchievements::setStaticF_Chairlift(::Shipmate::Porting::EPlatformAchievement*  value)  {
::cordl_internals::setStaticField<::Shipmate::Porting::EPlatformAchievement*, "Chairlift", ::GlobalNamespace::BWAchievements*>(std::forward<::Shipmate::Porting::EPlatformAchievement*>(value));
}
inline ::Shipmate::Porting::EPlatformAchievement* GlobalNamespace::BWAchievements::getStaticF_Chairlift()  {
return ::cordl_internals::getStaticField<::Shipmate::Porting::EPlatformAchievement*, "Chairlift", ::GlobalNamespace::BWAchievements*>();
}
inline void GlobalNamespace::BWAchievements::setStaticF_Train(::Shipmate::Porting::EPlatformAchievement*  value)  {
::cordl_internals::setStaticField<::Shipmate::Porting::EPlatformAchievement*, "Train", ::GlobalNamespace::BWAchievements*>(std::forward<::Shipmate::Porting::EPlatformAchievement*>(value));
}
inline ::Shipmate::Porting::EPlatformAchievement* GlobalNamespace::BWAchievements::getStaticF_Train()  {
return ::cordl_internals::getStaticField<::Shipmate::Porting::EPlatformAchievement*, "Train", ::GlobalNamespace::BWAchievements*>();
}
inline void GlobalNamespace::BWAchievements::setStaticF_Tunnel(::Shipmate::Porting::EPlatformAchievement*  value)  {
::cordl_internals::setStaticField<::Shipmate::Porting::EPlatformAchievement*, "Tunnel", ::GlobalNamespace::BWAchievements*>(std::forward<::Shipmate::Porting::EPlatformAchievement*>(value));
}
inline ::Shipmate::Porting::EPlatformAchievement* GlobalNamespace::BWAchievements::getStaticF_Tunnel()  {
return ::cordl_internals::getStaticField<::Shipmate::Porting::EPlatformAchievement*, "Tunnel", ::GlobalNamespace::BWAchievements*>();
}
inline void GlobalNamespace::BWAchievements::setStaticF_Wall(::Shipmate::Porting::EPlatformAchievement*  value)  {
::cordl_internals::setStaticField<::Shipmate::Porting::EPlatformAchievement*, "Wall", ::GlobalNamespace::BWAchievements*>(std::forward<::Shipmate::Porting::EPlatformAchievement*>(value));
}
inline ::Shipmate::Porting::EPlatformAchievement* GlobalNamespace::BWAchievements::getStaticF_Wall()  {
return ::cordl_internals::getStaticField<::Shipmate::Porting::EPlatformAchievement*, "Wall", ::GlobalNamespace::BWAchievements*>();
}
inline void GlobalNamespace::BWAchievements::setStaticF_Ending1(::Shipmate::Porting::EPlatformAchievement*  value)  {
::cordl_internals::setStaticField<::Shipmate::Porting::EPlatformAchievement*, "Ending1", ::GlobalNamespace::BWAchievements*>(std::forward<::Shipmate::Porting::EPlatformAchievement*>(value));
}
inline ::Shipmate::Porting::EPlatformAchievement* GlobalNamespace::BWAchievements::getStaticF_Ending1()  {
return ::cordl_internals::getStaticField<::Shipmate::Porting::EPlatformAchievement*, "Ending1", ::GlobalNamespace::BWAchievements*>();
}
inline void GlobalNamespace::BWAchievements::setStaticF_Ending2(::Shipmate::Porting::EPlatformAchievement*  value)  {
::cordl_internals::setStaticField<::Shipmate::Porting::EPlatformAchievement*, "Ending2", ::GlobalNamespace::BWAchievements*>(std::forward<::Shipmate::Porting::EPlatformAchievement*>(value));
}
inline ::Shipmate::Porting::EPlatformAchievement* GlobalNamespace::BWAchievements::getStaticF_Ending2()  {
return ::cordl_internals::getStaticField<::Shipmate::Porting::EPlatformAchievement*, "Ending2", ::GlobalNamespace::BWAchievements*>();
}
inline void GlobalNamespace::BWAchievements::setStaticF_Shiny(::Shipmate::Porting::EPlatformAchievement*  value)  {
::cordl_internals::setStaticField<::Shipmate::Porting::EPlatformAchievement*, "Shiny", ::GlobalNamespace::BWAchievements*>(std::forward<::Shipmate::Porting::EPlatformAchievement*>(value));
}
inline ::Shipmate::Porting::EPlatformAchievement* GlobalNamespace::BWAchievements::getStaticF_Shiny()  {
return ::cordl_internals::getStaticField<::Shipmate::Porting::EPlatformAchievement*, "Shiny", ::GlobalNamespace::BWAchievements*>();
}
inline void GlobalNamespace::BWAchievements::setStaticF_Backpack(::Shipmate::Porting::EPlatformAchievement*  value)  {
::cordl_internals::setStaticField<::Shipmate::Porting::EPlatformAchievement*, "Backpack", ::GlobalNamespace::BWAchievements*>(std::forward<::Shipmate::Porting::EPlatformAchievement*>(value));
}
inline ::Shipmate::Porting::EPlatformAchievement* GlobalNamespace::BWAchievements::getStaticF_Backpack()  {
return ::cordl_internals::getStaticField<::Shipmate::Porting::EPlatformAchievement*, "Backpack", ::GlobalNamespace::BWAchievements*>();
}
inline void GlobalNamespace::BWAchievements::setStaticF_Holster(::Shipmate::Porting::EPlatformAchievement*  value)  {
::cordl_internals::setStaticField<::Shipmate::Porting::EPlatformAchievement*, "Holster", ::GlobalNamespace::BWAchievements*>(std::forward<::Shipmate::Porting::EPlatformAchievement*>(value));
}
inline ::Shipmate::Porting::EPlatformAchievement* GlobalNamespace::BWAchievements::getStaticF_Holster()  {
return ::cordl_internals::getStaticField<::Shipmate::Porting::EPlatformAchievement*, "Holster", ::GlobalNamespace::BWAchievements*>();
}
inline void GlobalNamespace::BWAchievements::setStaticF_Peak(::Shipmate::Porting::EPlatformAchievement*  value)  {
::cordl_internals::setStaticField<::Shipmate::Porting::EPlatformAchievement*, "Peak", ::GlobalNamespace::BWAchievements*>(std::forward<::Shipmate::Porting::EPlatformAchievement*>(value));
}
inline ::Shipmate::Porting::EPlatformAchievement* GlobalNamespace::BWAchievements::getStaticF_Peak()  {
return ::cordl_internals::getStaticField<::Shipmate::Porting::EPlatformAchievement*, "Peak", ::GlobalNamespace::BWAchievements*>();
}
inline void GlobalNamespace::BWAchievements::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BWAchievements*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::BWAchievements::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BWAchievements*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BWAchievements* GlobalNamespace::BWAchievements::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BWAchievements*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BWAchievements::BWAchievements()   {
}
