#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/LogLevelConfig.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__Config_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__LogLevelConfig_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__LogCategoryLevelPair_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__LogLevelConfig_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::LogLevelConfig___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::LogLevelConfig___c::*)()>(&::PlayEveryWare::EpicOnlineServices::LogLevelConfig___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::LogLevelConfig___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::LogLevelConfig___c.__cctor_b__0_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::PlayEveryWare::EpicOnlineServices::LogLevelConfig* (::PlayEveryWare::EpicOnlineServices::LogLevelConfig___c::*)()>(&::PlayEveryWare::EpicOnlineServices::LogLevelConfig___c::__cctor_b__0_0)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180548d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::LogLevelConfig___c*>(),
                        {"<.cctor>b__0_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void PlayEveryWare::EpicOnlineServices::LogLevelConfig___c::setStaticF___9(::PlayEveryWare::EpicOnlineServices::LogLevelConfig___c*  value)  {
::cordl_internals::setStaticField<::PlayEveryWare::EpicOnlineServices::LogLevelConfig___c*, "<>9", ::PlayEveryWare::EpicOnlineServices::LogLevelConfig___c*>(std::forward<::PlayEveryWare::EpicOnlineServices::LogLevelConfig___c*>(value));
}
inline ::PlayEveryWare::EpicOnlineServices::LogLevelConfig___c* PlayEveryWare::EpicOnlineServices::LogLevelConfig___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::PlayEveryWare::EpicOnlineServices::LogLevelConfig___c*, "<>9", ::PlayEveryWare::EpicOnlineServices::LogLevelConfig___c*>();
}
inline void PlayEveryWare::EpicOnlineServices::LogLevelConfig___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::LogLevelConfig___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayEveryWare::EpicOnlineServices::LogLevelConfig* PlayEveryWare::EpicOnlineServices::LogLevelConfig___c::__cctor_b__0_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::LogLevelConfig___c*>(),
                        {"<.cctor>b__0_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::PlayEveryWare::EpicOnlineServices::LogLevelConfig*>(this, ___internal_method);
}
inline ::PlayEveryWare::EpicOnlineServices::LogLevelConfig___c* PlayEveryWare::EpicOnlineServices::LogLevelConfig___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::LogLevelConfig___c*>());
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::LogLevelConfig___c::LogLevelConfig___c()   {
}
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::LogLevelConfig._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::LogLevelConfig::*)()>(&::PlayEveryWare::EpicOnlineServices::LogLevelConfig::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805413f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::LogLevelConfig*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayEveryWare::EpicOnlineServices::LogCategoryLevelPair*>*& PlayEveryWare::EpicOnlineServices::LogLevelConfig::__cordl_internal_get_LogCategoryLevelPairs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LogCategoryLevelPairs;
}
constexpr ::System::Collections::Generic::List_1<::PlayEveryWare::EpicOnlineServices::LogCategoryLevelPair*>* const& PlayEveryWare::EpicOnlineServices::LogLevelConfig::__cordl_internal_get_LogCategoryLevelPairs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LogCategoryLevelPairs;
}
constexpr void PlayEveryWare::EpicOnlineServices::LogLevelConfig::__cordl_internal_set_LogCategoryLevelPairs(::System::Collections::Generic::List_1<::PlayEveryWare::EpicOnlineServices::LogCategoryLevelPair*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LogCategoryLevelPairs = value;
}
inline void PlayEveryWare::EpicOnlineServices::LogLevelConfig::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::LogLevelConfig*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayEveryWare::EpicOnlineServices::LogLevelConfig* PlayEveryWare::EpicOnlineServices::LogLevelConfig::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::LogLevelConfig*>());
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::LogLevelConfig::LogLevelConfig()   {
}
