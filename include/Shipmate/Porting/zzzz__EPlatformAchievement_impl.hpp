#pragma once
// IWYU pragma private; include "Shipmate/Porting/EPlatformAchievement.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Shipmate/Porting/zzzz__EPlatformAchievement_def.hpp"
#include "Shipmate/Porting/Logs/zzzz__PlatformLog_def.hpp"
#include "Shipmate/Porting/zzzz__EPlatformAchievement_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::Shipmate::Porting::EPlatformAchievement___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::EPlatformAchievement___c::*)()>(&::Shipmate::Porting::EPlatformAchievement___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::EPlatformAchievement___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::EPlatformAchievement___c._get_StatTrackedAchievementStorageNames_b__28_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Shipmate::Porting::EPlatformAchievement___c::*)(::Shipmate::Porting::EPlatformAchievement*)>(&::Shipmate::Porting::EPlatformAchievement___c::_get_StatTrackedAchievementStorageNames_b__28_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181ac8ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::EPlatformAchievement___c*>(),
                        {"<get_StatTrackedAchievementStorageNames>b__28_0", {}, {::i2c::type_of<::Shipmate::Porting::EPlatformAchievement*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::EPlatformAchievement___c._get_StatTrackedAchievementStorageNames_b__28_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Shipmate::Porting::EPlatformAchievement___c::*)(::Shipmate::Porting::EPlatformAchievement*)>(&::Shipmate::Porting::EPlatformAchievement___c::_get_StatTrackedAchievementStorageNames_b__28_1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181ac9010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::EPlatformAchievement___c*>(),
                        {"<get_StatTrackedAchievementStorageNames>b__28_1", {}, {::i2c::type_of<::Shipmate::Porting::EPlatformAchievement*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Shipmate::Porting::EPlatformAchievement___c::setStaticF___9(::Shipmate::Porting::EPlatformAchievement___c*  value)  {
::cordl_internals::setStaticField<::Shipmate::Porting::EPlatformAchievement___c*, "<>9", ::Shipmate::Porting::EPlatformAchievement___c*>(std::forward<::Shipmate::Porting::EPlatformAchievement___c*>(value));
}
inline ::Shipmate::Porting::EPlatformAchievement___c* Shipmate::Porting::EPlatformAchievement___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Shipmate::Porting::EPlatformAchievement___c*, "<>9", ::Shipmate::Porting::EPlatformAchievement___c*>();
}
inline void Shipmate::Porting::EPlatformAchievement___c::setStaticF___9__28_0(::System::Func_2<::Shipmate::Porting::EPlatformAchievement*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Shipmate::Porting::EPlatformAchievement*,bool>*, "<>9__28_0", ::Shipmate::Porting::EPlatformAchievement___c*>(std::forward<::System::Func_2<::Shipmate::Porting::EPlatformAchievement*,bool>*>(value));
}
inline ::System::Func_2<::Shipmate::Porting::EPlatformAchievement*,bool>* Shipmate::Porting::EPlatformAchievement___c::getStaticF___9__28_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Shipmate::Porting::EPlatformAchievement*,bool>*, "<>9__28_0", ::Shipmate::Porting::EPlatformAchievement___c*>();
}
inline void Shipmate::Porting::EPlatformAchievement___c::setStaticF___9__28_1(::System::Func_2<::Shipmate::Porting::EPlatformAchievement*,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Shipmate::Porting::EPlatformAchievement*,::StringW>*, "<>9__28_1", ::Shipmate::Porting::EPlatformAchievement___c*>(std::forward<::System::Func_2<::Shipmate::Porting::EPlatformAchievement*,::StringW>*>(value));
}
inline ::System::Func_2<::Shipmate::Porting::EPlatformAchievement*,::StringW>* Shipmate::Porting::EPlatformAchievement___c::getStaticF___9__28_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Shipmate::Porting::EPlatformAchievement*,::StringW>*, "<>9__28_1", ::Shipmate::Porting::EPlatformAchievement___c*>();
}
inline void Shipmate::Porting::EPlatformAchievement___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::EPlatformAchievement___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Shipmate::Porting::EPlatformAchievement___c::_get_StatTrackedAchievementStorageNames_b__28_0(::Shipmate::Porting::EPlatformAchievement*  a)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::EPlatformAchievement___c*>(),
                        {"<get_StatTrackedAchievementStorageNames>b__28_0", {}, {::i2c::type_of<::Shipmate::Porting::EPlatformAchievement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, a);
}
inline ::StringW Shipmate::Porting::EPlatformAchievement___c::_get_StatTrackedAchievementStorageNames_b__28_1(::Shipmate::Porting::EPlatformAchievement*  a)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::EPlatformAchievement___c*>(),
                        {"<get_StatTrackedAchievementStorageNames>b__28_1", {}, {::i2c::type_of<::Shipmate::Porting::EPlatformAchievement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, a);
}
inline ::Shipmate::Porting::EPlatformAchievement___c* Shipmate::Porting::EPlatformAchievement___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmate::Porting::EPlatformAchievement___c*>());
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::EPlatformAchievement___c::EPlatformAchievement___c()   {
}
//  Writing Method size for method: ::Shipmate::Porting::EPlatformAchievement._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::EPlatformAchievement::*)(::StringW, int32_t, int32_t, ::StringW, int32_t, int32_t)>(&::Shipmate::Porting::EPlatformAchievement::_ctor)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181ac6680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::EPlatformAchievement*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::EPlatformAchievement.get_XboxId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Shipmate::Porting::EPlatformAchievement::*)()>(&::Shipmate::Porting::EPlatformAchievement::get_XboxId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f41a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::EPlatformAchievement*>(),
                        {"get_XboxId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::EPlatformAchievement.get_PS4TrophyId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Shipmate::Porting::EPlatformAchievement::*)()>(&::Shipmate::Porting::EPlatformAchievement::get_PS4TrophyId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f42c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::EPlatformAchievement*>(),
                        {"get_PS4TrophyId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::EPlatformAchievement.get_PS5TrophyId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Shipmate::Porting::EPlatformAchievement::*)()>(&::Shipmate::Porting::EPlatformAchievement::get_PS5TrophyId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::EPlatformAchievement*>(),
                        {"get_PS5TrophyId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::EPlatformAchievement.get_UnlockCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Shipmate::Porting::EPlatformAchievement::*)()>(&::Shipmate::Porting::EPlatformAchievement::get_UnlockCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::EPlatformAchievement*>(),
                        {"get_UnlockCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::EPlatformAchievement.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Shipmate::Porting::EPlatformAchievement::*)()>(&::Shipmate::Porting::EPlatformAchievement::get_Name)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::EPlatformAchievement*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::EPlatformAchievement.get_SteamStatAPIName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Shipmate::Porting::EPlatformAchievement::*)()>(&::Shipmate::Porting::EPlatformAchievement::get_SteamStatAPIName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::EPlatformAchievement*>(),
                        {"get_SteamStatAPIName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::EPlatformAchievement.get_StorageName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Shipmate::Porting::EPlatformAchievement::*)()>(&::Shipmate::Porting::EPlatformAchievement::get_StorageName)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181ac69a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::EPlatformAchievement*>(),
                        {"get_StorageName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::EPlatformAchievement.get_IsStatTrackedAchievement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Shipmate::Porting::EPlatformAchievement::*)()>(&::Shipmate::Porting::EPlatformAchievement::get_IsStatTrackedAchievement)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181ac6820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::EPlatformAchievement*>(),
                        {"get_IsStatTrackedAchievement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::EPlatformAchievement.get_AllAchievements
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Shipmate::Porting::EPlatformAchievement*>* (*)()>(&::Shipmate::Porting::EPlatformAchievement::get_AllAchievements)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181ac67e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::EPlatformAchievement*>(),
                        {"get_AllAchievements", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::EPlatformAchievement.get_StatTrackedAchievementStorageNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)()>(&::Shipmate::Porting::EPlatformAchievement::get_StatTrackedAchievementStorageNames)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x181ac6830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::EPlatformAchievement*>(),
                        {"get_StatTrackedAchievementStorageNames", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Shipmate::Porting::EPlatformAchievement::__cordl_internal_get_mName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mName;
}
constexpr ::StringW const& Shipmate::Porting::EPlatformAchievement::__cordl_internal_get_mName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mName;
}
constexpr void Shipmate::Porting::EPlatformAchievement::__cordl_internal_set_mName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mName = value;
}
constexpr int32_t& Shipmate::Porting::EPlatformAchievement::__cordl_internal_get_mXboxId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mXboxId;
}
constexpr int32_t const& Shipmate::Porting::EPlatformAchievement::__cordl_internal_get_mXboxId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mXboxId;
}
constexpr void Shipmate::Porting::EPlatformAchievement::__cordl_internal_set_mXboxId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mXboxId = value;
}
constexpr int32_t& Shipmate::Porting::EPlatformAchievement::__cordl_internal_get_mPS4TrophyId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mPS4TrophyId;
}
constexpr int32_t const& Shipmate::Porting::EPlatformAchievement::__cordl_internal_get_mPS4TrophyId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mPS4TrophyId;
}
constexpr void Shipmate::Porting::EPlatformAchievement::__cordl_internal_set_mPS4TrophyId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mPS4TrophyId = value;
}
constexpr int32_t& Shipmate::Porting::EPlatformAchievement::__cordl_internal_get_mPS5TrophyId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mPS5TrophyId;
}
constexpr int32_t const& Shipmate::Porting::EPlatformAchievement::__cordl_internal_get_mPS5TrophyId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mPS5TrophyId;
}
constexpr void Shipmate::Porting::EPlatformAchievement::__cordl_internal_set_mPS5TrophyId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mPS5TrophyId = value;
}
constexpr int32_t& Shipmate::Porting::EPlatformAchievement::__cordl_internal_get_mUnlockCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mUnlockCount;
}
constexpr int32_t const& Shipmate::Porting::EPlatformAchievement::__cordl_internal_get_mUnlockCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mUnlockCount;
}
constexpr void Shipmate::Porting::EPlatformAchievement::__cordl_internal_set_mUnlockCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mUnlockCount = value;
}
constexpr ::StringW& Shipmate::Porting::EPlatformAchievement::__cordl_internal_get_mSteamStatAPIName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mSteamStatAPIName;
}
constexpr ::StringW const& Shipmate::Porting::EPlatformAchievement::__cordl_internal_get_mSteamStatAPIName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mSteamStatAPIName;
}
constexpr void Shipmate::Porting::EPlatformAchievement::__cordl_internal_set_mSteamStatAPIName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mSteamStatAPIName = value;
}
inline void Shipmate::Porting::EPlatformAchievement::setStaticF_Log(::Shipmate::Porting::Logs::PlatformLog*  value)  {
::cordl_internals::setStaticField<::Shipmate::Porting::Logs::PlatformLog*, "Log", ::Shipmate::Porting::EPlatformAchievement*>(std::forward<::Shipmate::Porting::Logs::PlatformLog*>(value));
}
inline ::Shipmate::Porting::Logs::PlatformLog* Shipmate::Porting::EPlatformAchievement::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Shipmate::Porting::Logs::PlatformLog*, "Log", ::Shipmate::Porting::EPlatformAchievement*>();
}
inline void Shipmate::Porting::EPlatformAchievement::setStaticF_ALL_ACHIEVEMENTS(::System::Collections::Generic::List_1<::Shipmate::Porting::EPlatformAchievement*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::Shipmate::Porting::EPlatformAchievement*>*, "ALL_ACHIEVEMENTS", ::Shipmate::Porting::EPlatformAchievement*>(std::forward<::System::Collections::Generic::List_1<::Shipmate::Porting::EPlatformAchievement*>*>(value));
}
inline ::System::Collections::Generic::List_1<::Shipmate::Porting::EPlatformAchievement*>* Shipmate::Porting::EPlatformAchievement::getStaticF_ALL_ACHIEVEMENTS()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::Shipmate::Porting::EPlatformAchievement*>*, "ALL_ACHIEVEMENTS", ::Shipmate::Porting::EPlatformAchievement*>();
}
inline void Shipmate::Porting::EPlatformAchievement::_ctor(::StringW  aName, int32_t  aXboxId, int32_t  aUnlockCount, ::StringW  aSteamStatAPIName, int32_t  aPS4TrophyId, int32_t  aPS5TrophyId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::EPlatformAchievement*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aName, aXboxId, aUnlockCount, aSteamStatAPIName, aPS4TrophyId, aPS5TrophyId);
}
inline int32_t Shipmate::Porting::EPlatformAchievement::get_XboxId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::EPlatformAchievement*>(),
                        {"get_XboxId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Shipmate::Porting::EPlatformAchievement::get_PS4TrophyId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::EPlatformAchievement*>(),
                        {"get_PS4TrophyId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Shipmate::Porting::EPlatformAchievement::get_PS5TrophyId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::EPlatformAchievement*>(),
                        {"get_PS5TrophyId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Shipmate::Porting::EPlatformAchievement::get_UnlockCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::EPlatformAchievement*>(),
                        {"get_UnlockCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW Shipmate::Porting::EPlatformAchievement::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::EPlatformAchievement*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Shipmate::Porting::EPlatformAchievement::get_SteamStatAPIName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::EPlatformAchievement*>(),
                        {"get_SteamStatAPIName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Shipmate::Porting::EPlatformAchievement::get_StorageName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::EPlatformAchievement*>(),
                        {"get_StorageName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Shipmate::Porting::EPlatformAchievement::get_IsStatTrackedAchievement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::EPlatformAchievement*>(),
                        {"get_IsStatTrackedAchievement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Shipmate::Porting::EPlatformAchievement*>* Shipmate::Porting::EPlatformAchievement::get_AllAchievements()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::EPlatformAchievement*>(),
                        {"get_AllAchievements", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Shipmate::Porting::EPlatformAchievement*>*>(nullptr, ___internal_method);
}
inline ::ArrayW<::StringW> Shipmate::Porting::EPlatformAchievement::get_StatTrackedAchievementStorageNames()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::EPlatformAchievement*>(),
                        {"get_StatTrackedAchievementStorageNames", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method);
}
inline ::Shipmate::Porting::EPlatformAchievement* Shipmate::Porting::EPlatformAchievement::New_ctor(::StringW  aName, int32_t  aXboxId, int32_t  aUnlockCount, ::StringW  aSteamStatAPIName, int32_t  aPS4TrophyId, int32_t  aPS5TrophyId)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmate::Porting::EPlatformAchievement*>(aName, aXboxId, aUnlockCount, aSteamStatAPIName, aPS4TrophyId, aPS5TrophyId));
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::EPlatformAchievement::EPlatformAchievement()   {
}
