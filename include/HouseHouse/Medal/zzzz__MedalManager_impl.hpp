#pragma once
// IWYU pragma private; include "HouseHouse/Medal/MedalManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HouseHouse/Medal/zzzz__MedalManager_def.hpp"
#include "HouseHouse/Medal/zzzz__MedalType_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
//  Writing Method size for method: ::HouseHouse::Medal::MedalManager.UnlockMedal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::HouseHouse::Medal::MedalType)>(&::HouseHouse::Medal::MedalManager::UnlockMedal)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1803cd6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Medal::MedalManager*>(),
                        {"UnlockMedal", {}, {::i2c::type_of<::HouseHouse::Medal::MedalType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseHouse::Medal::MedalManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseHouse::Medal::MedalManager::*)()>(&::HouseHouse::Medal::MedalManager::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Medal::MedalManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void HouseHouse::Medal::MedalManager::setStaticF__alreadyFiredThisSession(::System::Collections::Generic::HashSet_1<::HouseHouse::Medal::MedalType>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::HouseHouse::Medal::MedalType>*, "_alreadyFiredThisSession", ::HouseHouse::Medal::MedalManager*>(std::forward<::System::Collections::Generic::HashSet_1<::HouseHouse::Medal::MedalType>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::HouseHouse::Medal::MedalType>* HouseHouse::Medal::MedalManager::getStaticF__alreadyFiredThisSession()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::HouseHouse::Medal::MedalType>*, "_alreadyFiredThisSession", ::HouseHouse::Medal::MedalManager*>();
}
inline void HouseHouse::Medal::MedalManager::UnlockMedal(::HouseHouse::Medal::MedalType  medalType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Medal::MedalManager*>(),
                        {"UnlockMedal", {}, {::i2c::type_of<::HouseHouse::Medal::MedalType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, medalType);
}
inline void HouseHouse::Medal::MedalManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Medal::MedalManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HouseHouse::Medal::MedalManager* HouseHouse::Medal::MedalManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HouseHouse::Medal::MedalManager*>());
}
// Ctor Parameters []
constexpr ::HouseHouse::Medal::MedalManager::MedalManager()   {
}
