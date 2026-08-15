#pragma once
// IWYU pragma private; include "GlobalNamespace/ParentalRestrictionManager.hpp"
#include "Shipmate/Utils/zzzz__SingletonBehaviour_1_impl.hpp"
#include "GlobalNamespace/zzzz__ParentalRestrictionManager_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ParentalRestrictionManager.add_OnParentalRestrictionsChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<bool>*)>(&::GlobalNamespace::ParentalRestrictionManager::add_OnParentalRestrictionsChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181acd060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParentalRestrictionManager*>(),
                        {"add_OnParentalRestrictionsChanged", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParentalRestrictionManager.remove_OnParentalRestrictionsChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<bool>*)>(&::GlobalNamespace::ParentalRestrictionManager::remove_OnParentalRestrictionsChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181acd170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParentalRestrictionManager*>(),
                        {"remove_OnParentalRestrictionsChanged", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParentalRestrictionManager.get_CurrentParentalRestricted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::ParentalRestrictionManager::get_CurrentParentalRestricted)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181acd110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParentalRestrictionManager*>(),
                        {"get_CurrentParentalRestricted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParentalRestrictionManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParentalRestrictionManager::*)()>(&::GlobalNamespace::ParentalRestrictionManager::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParentalRestrictionManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::ParentalRestrictionManager::__cordl_internal_get__currentParentalRestricted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentParentalRestricted;
}
constexpr bool const& GlobalNamespace::ParentalRestrictionManager::__cordl_internal_get__currentParentalRestricted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentParentalRestricted;
}
constexpr void GlobalNamespace::ParentalRestrictionManager::__cordl_internal_set__currentParentalRestricted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentParentalRestricted = value;
}
inline void GlobalNamespace::ParentalRestrictionManager::setStaticF_OnParentalRestrictionsChanged(::System::Action_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<bool>*, "OnParentalRestrictionsChanged", ::GlobalNamespace::ParentalRestrictionManager*>(std::forward<::System::Action_1<bool>*>(value));
}
inline ::System::Action_1<bool>* GlobalNamespace::ParentalRestrictionManager::getStaticF_OnParentalRestrictionsChanged()  {
return ::cordl_internals::getStaticField<::System::Action_1<bool>*, "OnParentalRestrictionsChanged", ::GlobalNamespace::ParentalRestrictionManager*>();
}
inline void GlobalNamespace::ParentalRestrictionManager::add_OnParentalRestrictionsChanged(::System::Action_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParentalRestrictionManager*>(),
                        {"add_OnParentalRestrictionsChanged", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::ParentalRestrictionManager::remove_OnParentalRestrictionsChanged(::System::Action_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParentalRestrictionManager*>(),
                        {"remove_OnParentalRestrictionsChanged", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::ParentalRestrictionManager::get_CurrentParentalRestricted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParentalRestrictionManager*>(),
                        {"get_CurrentParentalRestricted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::ParentalRestrictionManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParentalRestrictionManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ParentalRestrictionManager* GlobalNamespace::ParentalRestrictionManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ParentalRestrictionManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ParentalRestrictionManager::ParentalRestrictionManager()   {
}
