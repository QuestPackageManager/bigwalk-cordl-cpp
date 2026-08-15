#pragma once
// IWYU pragma private; include "System/Diagnostics/Switch.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Diagnostics/zzzz__Switch_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__WeakReference_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::Switch._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::Switch::*)(::StringW, ::StringW)>(&::System::Diagnostics::Switch::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181dd7090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::Switch*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Switch._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::Switch::*)(::StringW, ::StringW, ::StringW)>(&::System::Diagnostics::Switch::_ctor)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x181de4c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::Switch*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Switch._pruneCachedSwitches
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Diagnostics::Switch::_pruneCachedSwitches)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x181de4e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::Switch*>(),
                        {"_pruneCachedSwitches", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Diagnostics::Switch::__cordl_internal_get_description()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___description;
}
constexpr ::StringW const& System::Diagnostics::Switch::__cordl_internal_get_description() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___description;
}
constexpr void System::Diagnostics::Switch::__cordl_internal_set_description(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___description = value;
}
constexpr ::StringW& System::Diagnostics::Switch::__cordl_internal_get_displayName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayName;
}
constexpr ::StringW const& System::Diagnostics::Switch::__cordl_internal_get_displayName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayName;
}
constexpr void System::Diagnostics::Switch::__cordl_internal_set_displayName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___displayName = value;
}
constexpr ::StringW& System::Diagnostics::Switch::__cordl_internal_get_switchValueString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___switchValueString;
}
constexpr ::StringW const& System::Diagnostics::Switch::__cordl_internal_get_switchValueString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___switchValueString;
}
constexpr void System::Diagnostics::Switch::__cordl_internal_set_switchValueString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___switchValueString = value;
}
constexpr ::StringW& System::Diagnostics::Switch::__cordl_internal_get_defaultValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultValue;
}
constexpr ::StringW const& System::Diagnostics::Switch::__cordl_internal_get_defaultValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultValue;
}
constexpr void System::Diagnostics::Switch::__cordl_internal_set_defaultValue(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultValue = value;
}
inline void System::Diagnostics::Switch::setStaticF_switches(::System::Collections::Generic::List_1<::System::WeakReference*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::WeakReference*>*, "switches", ::System::Diagnostics::Switch*>(std::forward<::System::Collections::Generic::List_1<::System::WeakReference*>*>(value));
}
inline ::System::Collections::Generic::List_1<::System::WeakReference*>* System::Diagnostics::Switch::getStaticF_switches()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::WeakReference*>*, "switches", ::System::Diagnostics::Switch*>();
}
inline void System::Diagnostics::Switch::setStaticF_s_LastCollectionCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_LastCollectionCount", ::System::Diagnostics::Switch*>(std::forward<int32_t>(value));
}
inline int32_t System::Diagnostics::Switch::getStaticF_s_LastCollectionCount()  {
return ::cordl_internals::getStaticField<int32_t, "s_LastCollectionCount", ::System::Diagnostics::Switch*>();
}
inline void System::Diagnostics::Switch::_ctor(::StringW  displayName, ::StringW  description)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::Switch*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, displayName, description);
}
inline void System::Diagnostics::Switch::_ctor(::StringW  displayName, ::StringW  description, ::StringW  defaultSwitchValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::Switch*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, displayName, description, defaultSwitchValue);
}
inline void System::Diagnostics::Switch::_pruneCachedSwitches()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::Switch*>(),
                        {"_pruneCachedSwitches", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::Diagnostics::Switch* System::Diagnostics::Switch::New_ctor(::StringW  displayName, ::StringW  description)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Diagnostics::Switch*>(displayName, description));
}
inline ::System::Diagnostics::Switch* System::Diagnostics::Switch::New_ctor(::StringW  displayName, ::StringW  description, ::StringW  defaultSwitchValue)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Diagnostics::Switch*>(displayName, description, defaultSwitchValue));
}
// Ctor Parameters []
constexpr ::System::Diagnostics::Switch::Switch()   {
}
