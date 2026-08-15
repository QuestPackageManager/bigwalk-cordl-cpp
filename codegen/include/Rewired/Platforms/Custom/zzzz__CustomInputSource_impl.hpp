#pragma once
// IWYU pragma private; include "Rewired/Platforms/Custom/CustomInputSource.hpp"
#include "Rewired/Platforms/Custom/zzzz__CustomInputSource_impl.hpp"
#include "Rewired/zzzz__InputSource_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Platforms/Custom/zzzz__CustomInputSource_def.hpp"
#include "Rewired/Interfaces/zzzz__IUnifiedKeyboardSource_def.hpp"
#include "Rewired/Interfaces/zzzz__IUnifiedMouseSource_def.hpp"
#include "Rewired/Platforms/Custom/zzzz__CustomInputSource_def.hpp"
#include "Rewired/zzzz__Controller_def.hpp"
#include "Rewired/zzzz__InputSource_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource_Controller.add_ConnectedStateChangedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomInputSource_Controller::*)(::System::Action_1<bool>*)>(&::Rewired::Platforms::Custom::CustomInputSource_Controller::add_ConnectedStateChangedEvent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18187c8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Controller*>(),
                        {"add_ConnectedStateChangedEvent", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource_Controller.remove_ConnectedStateChangedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomInputSource_Controller::*)(::System::Action_1<bool>*)>(&::Rewired::Platforms::Custom::CustomInputSource_Controller::remove_ConnectedStateChangedEvent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18187c940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Controller*>(),
                        {"remove_ConnectedStateChangedEvent", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource_Controller.get_customName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Platforms::Custom::CustomInputSource_Controller::*)()>(&::Rewired::Platforms::Custom::CustomInputSource_Controller::get_customName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Controller*>(),
                        {"get_customName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource_Controller.get_isConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Platforms::Custom::CustomInputSource_Controller::*)()>(&::Rewired::Platforms::Custom::CustomInputSource_Controller::get_isConnected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180392490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Controller*>(),
                        {"get_isConnected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource_Controller.set_isConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomInputSource_Controller::*)(bool)>(&::Rewired::Platforms::Custom::CustomInputSource_Controller::set_isConnected)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18187c9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Controller*>(),
                        {"set_isConnected", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource_Controller.get_deviceName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Platforms::Custom::CustomInputSource_Controller::*)()>(&::Rewired::Platforms::Custom::CustomInputSource_Controller::get_deviceName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Controller*>(),
                        {"get_deviceName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource_Controller.get_customIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::Platforms::Custom::CustomInputSource_Controller::*)()>(&::Rewired::Platforms::Custom::CustomInputSource_Controller::get_customIdentifier)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Controller*>(),
                        {"get_customIdentifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource_Controller.set_customIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomInputSource_Controller::*)(::System::Object*)>(&::Rewired::Platforms::Custom::CustomInputSource_Controller::set_customIdentifier)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Controller*>(),
                        {"set_customIdentifier", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource_Controller.get_deviceInstanceGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::Rewired::Platforms::Custom::CustomInputSource_Controller::*)()>(&::Rewired::Platforms::Custom::CustomInputSource_Controller::get_deviceInstanceGuid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e30e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Controller*>(),
                        {"get_deviceInstanceGuid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource_Controller.set_deviceInstanceGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomInputSource_Controller::*)(::System::Guid)>(&::Rewired::Platforms::Custom::CustomInputSource_Controller::set_deviceInstanceGuid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18187c9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Controller*>(),
                        {"set_deviceInstanceGuid", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource_Controller._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomInputSource_Controller::*)(::StringW)>(&::Rewired::Platforms::Custom::CustomInputSource_Controller::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Controller*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource_Controller.Disconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomInputSource_Controller::*)()>(&::Rewired::Platforms::Custom::CustomInputSource_Controller::Disconnect)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18187c890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Controller*>(),
                        {"Disconnect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource_Controller.Connect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomInputSource_Controller::*)()>(&::Rewired::Platforms::Custom::CustomInputSource_Controller::Connect)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18187c870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Controller*>(),
                        {"Connect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource_Controller.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomInputSource_Controller::*)()>(&::Rewired::Platforms::Custom::CustomInputSource_Controller::Update)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Controller*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Controller*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr bool& Rewired::Platforms::Custom::CustomInputSource_Controller::__cordl_internal_get__isConnected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isConnected;
}
constexpr bool const& Rewired::Platforms::Custom::CustomInputSource_Controller::__cordl_internal_get__isConnected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isConnected;
}
constexpr void Rewired::Platforms::Custom::CustomInputSource_Controller::__cordl_internal_set__isConnected(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isConnected = value;
}
constexpr ::StringW& Rewired::Platforms::Custom::CustomInputSource_Controller::__cordl_internal_get__deviceName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deviceName;
}
constexpr ::StringW const& Rewired::Platforms::Custom::CustomInputSource_Controller::__cordl_internal_get__deviceName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deviceName;
}
constexpr void Rewired::Platforms::Custom::CustomInputSource_Controller::__cordl_internal_set__deviceName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____deviceName = value;
}
constexpr ::StringW& Rewired::Platforms::Custom::CustomInputSource_Controller::__cordl_internal_get__customName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customName;
}
constexpr ::StringW const& Rewired::Platforms::Custom::CustomInputSource_Controller::__cordl_internal_get__customName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customName;
}
constexpr void Rewired::Platforms::Custom::CustomInputSource_Controller::__cordl_internal_set__customName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____customName = value;
}
constexpr ::System::Object*& Rewired::Platforms::Custom::CustomInputSource_Controller::__cordl_internal_get__customIdentifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customIdentifier;
}
constexpr ::System::Object* const& Rewired::Platforms::Custom::CustomInputSource_Controller::__cordl_internal_get__customIdentifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customIdentifier;
}
constexpr void Rewired::Platforms::Custom::CustomInputSource_Controller::__cordl_internal_set__customIdentifier(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____customIdentifier = value;
}
constexpr ::System::Guid& Rewired::Platforms::Custom::CustomInputSource_Controller::__cordl_internal_get__persistentGuid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____persistentGuid;
}
constexpr ::System::Guid const& Rewired::Platforms::Custom::CustomInputSource_Controller::__cordl_internal_get__persistentGuid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____persistentGuid;
}
constexpr void Rewired::Platforms::Custom::CustomInputSource_Controller::__cordl_internal_set__persistentGuid(::System::Guid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____persistentGuid = value;
}
constexpr ::System::Action_1<bool>*& Rewired::Platforms::Custom::CustomInputSource_Controller::__cordl_internal_get_LEmVVQDWbsbTTeqXCgyAtFcFvEqn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LEmVVQDWbsbTTeqXCgyAtFcFvEqn;
}
constexpr ::System::Action_1<bool>* const& Rewired::Platforms::Custom::CustomInputSource_Controller::__cordl_internal_get_LEmVVQDWbsbTTeqXCgyAtFcFvEqn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LEmVVQDWbsbTTeqXCgyAtFcFvEqn;
}
constexpr void Rewired::Platforms::Custom::CustomInputSource_Controller::__cordl_internal_set_LEmVVQDWbsbTTeqXCgyAtFcFvEqn(::System::Action_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LEmVVQDWbsbTTeqXCgyAtFcFvEqn = value;
}
inline void Rewired::Platforms::Custom::CustomInputSource_Controller::add_ConnectedStateChangedEvent(::System::Action_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Controller*>(),
                        {"add_ConnectedStateChangedEvent", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Platforms::Custom::CustomInputSource_Controller::remove_ConnectedStateChangedEvent(::System::Action_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Controller*>(),
                        {"remove_ConnectedStateChangedEvent", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Rewired::Platforms::Custom::CustomInputSource_Controller::get_customName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Controller*>(),
                        {"get_customName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Rewired::Platforms::Custom::CustomInputSource_Controller::get_isConnected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Controller*>(),
                        {"get_isConnected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Platforms::Custom::CustomInputSource_Controller::set_isConnected(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Controller*>(),
                        {"set_isConnected", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Rewired::Platforms::Custom::CustomInputSource_Controller::get_deviceName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Controller*>(),
                        {"get_deviceName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Object* Rewired::Platforms::Custom::CustomInputSource_Controller::get_customIdentifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Controller*>(),
                        {"get_customIdentifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Rewired::Platforms::Custom::CustomInputSource_Controller::set_customIdentifier(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Controller*>(),
                        {"set_customIdentifier", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Guid Rewired::Platforms::Custom::CustomInputSource_Controller::get_deviceInstanceGuid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Controller*>(),
                        {"get_deviceInstanceGuid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline void Rewired::Platforms::Custom::CustomInputSource_Controller::set_deviceInstanceGuid(::System::Guid  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Controller*>(),
                        {"set_deviceInstanceGuid", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Platforms::Custom::CustomInputSource_Controller::_ctor(::StringW  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Controller*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Platforms::Custom::CustomInputSource_Controller::Disconnect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Controller*>(),
                        {"Disconnect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Platforms::Custom::CustomInputSource_Controller::Connect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Controller*>(),
                        {"Connect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Platforms::Custom::CustomInputSource_Controller::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Controller*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Platforms::Custom::CustomInputSource_Controller* Rewired::Platforms::Custom::CustomInputSource_Controller::New_ctor(::StringW  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Platforms::Custom::CustomInputSource_Controller*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::Rewired::Platforms::Custom::CustomInputSource_Controller::CustomInputSource_Controller()   {
}
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource_Element._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomInputSource_Element::*)()>(&::Rewired::Platforms::Custom::CustomInputSource_Element::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Element*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::Platforms::Custom::CustomInputSource_Element::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Element*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Platforms::Custom::CustomInputSource_Element* Rewired::Platforms::Custom::CustomInputSource_Element::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Platforms::Custom::CustomInputSource_Element*>());
}
// Ctor Parameters []
constexpr ::Rewired::Platforms::Custom::CustomInputSource_Element::CustomInputSource_Element()   {
}
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource_Axis._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomInputSource_Axis::*)()>(&::Rewired::Platforms::Custom::CustomInputSource_Axis::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Axis*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Rewired::Platforms::Custom::CustomInputSource_Axis::__cordl_internal_get_value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr float_t const& Rewired::Platforms::Custom::CustomInputSource_Axis::__cordl_internal_get_value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr void Rewired::Platforms::Custom::CustomInputSource_Axis::__cordl_internal_set_value(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___value = value;
}
inline void Rewired::Platforms::Custom::CustomInputSource_Axis::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Axis*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Platforms::Custom::CustomInputSource_Axis* Rewired::Platforms::Custom::CustomInputSource_Axis::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Platforms::Custom::CustomInputSource_Axis*>());
}
// Ctor Parameters []
constexpr ::Rewired::Platforms::Custom::CustomInputSource_Axis::CustomInputSource_Axis()   {
}
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource_Button.get_boolValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Platforms::Custom::CustomInputSource_Button::*)()>(&::Rewired::Platforms::Custom::CustomInputSource_Button::get_boolValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180392490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Button*>(),
                        {"get_boolValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource_Button.set_boolValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomInputSource_Button::*)(bool)>(&::Rewired::Platforms::Custom::CustomInputSource_Button::set_boolValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818762f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Button*>(),
                        {"set_boolValue", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource_Button.get_floatValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::Platforms::Custom::CustomInputSource_Button::*)()>(&::Rewired::Platforms::Custom::CustomInputSource_Button::get_floatValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803bda00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Button*>(),
                        {"get_floatValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource_Button.set_floatValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomInputSource_Button::*)(float_t)>(&::Rewired::Platforms::Custom::CustomInputSource_Button::set_floatValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803bda40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Button*>(),
                        {"set_floatValue", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource_Button.PfMZjqgsntlMiRbbqzPIwYUblaDj
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Platforms::Custom::CustomInputSource_Button::*)()>(&::Rewired::Platforms::Custom::CustomInputSource_Button::PfMZjqgsntlMiRbbqzPIwYUblaDj)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818762e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Button*>(),
                        {"PfMZjqgsntlMiRbbqzPIwYUblaDj", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource_Button.IaLIwTyTnifgKaUdGXmWrcHmhdoW
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomInputSource_Button::*)()>(&::Rewired::Platforms::Custom::CustomInputSource_Button::IaLIwTyTnifgKaUdGXmWrcHmhdoW)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818762d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Button*>(),
                        {"IaLIwTyTnifgKaUdGXmWrcHmhdoW", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource_Button._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomInputSource_Button::*)()>(&::Rewired::Platforms::Custom::CustomInputSource_Button::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Button*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Rewired::Platforms::Custom::CustomInputSource_Button::__cordl_internal_get_value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr bool const& Rewired::Platforms::Custom::CustomInputSource_Button::__cordl_internal_get_value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr void Rewired::Platforms::Custom::CustomInputSource_Button::__cordl_internal_set_value(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___value = value;
}
constexpr float_t& Rewired::Platforms::Custom::CustomInputSource_Button::__cordl_internal_get_nyYhavUhVAEHiSxUsJoWNFPOApdIA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nyYhavUhVAEHiSxUsJoWNFPOApdIA;
}
constexpr float_t const& Rewired::Platforms::Custom::CustomInputSource_Button::__cordl_internal_get_nyYhavUhVAEHiSxUsJoWNFPOApdIA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nyYhavUhVAEHiSxUsJoWNFPOApdIA;
}
constexpr void Rewired::Platforms::Custom::CustomInputSource_Button::__cordl_internal_set_nyYhavUhVAEHiSxUsJoWNFPOApdIA(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nyYhavUhVAEHiSxUsJoWNFPOApdIA = value;
}
constexpr bool& Rewired::Platforms::Custom::CustomInputSource_Button::__cordl_internal_get_MUCVeNDXkTsFqGGZRxQHfxqvLhYp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MUCVeNDXkTsFqGGZRxQHfxqvLhYp;
}
constexpr bool const& Rewired::Platforms::Custom::CustomInputSource_Button::__cordl_internal_get_MUCVeNDXkTsFqGGZRxQHfxqvLhYp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MUCVeNDXkTsFqGGZRxQHfxqvLhYp;
}
constexpr void Rewired::Platforms::Custom::CustomInputSource_Button::__cordl_internal_set_MUCVeNDXkTsFqGGZRxQHfxqvLhYp(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MUCVeNDXkTsFqGGZRxQHfxqvLhYp = value;
}
inline bool Rewired::Platforms::Custom::CustomInputSource_Button::get_boolValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Button*>(),
                        {"get_boolValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Platforms::Custom::CustomInputSource_Button::set_boolValue(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Button*>(),
                        {"set_boolValue", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::Platforms::Custom::CustomInputSource_Button::get_floatValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Button*>(),
                        {"get_floatValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::Platforms::Custom::CustomInputSource_Button::set_floatValue(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Button*>(),
                        {"set_floatValue", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::Platforms::Custom::CustomInputSource_Button::PfMZjqgsntlMiRbbqzPIwYUblaDj()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Button*>(),
                        {"PfMZjqgsntlMiRbbqzPIwYUblaDj", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Platforms::Custom::CustomInputSource_Button::IaLIwTyTnifgKaUdGXmWrcHmhdoW()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Button*>(),
                        {"IaLIwTyTnifgKaUdGXmWrcHmhdoW", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Platforms::Custom::CustomInputSource_Button::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Button*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Platforms::Custom::CustomInputSource_Button* Rewired::Platforms::Custom::CustomInputSource_Button::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Platforms::Custom::CustomInputSource_Button*>());
}
// Ctor Parameters []
constexpr ::Rewired::Platforms::Custom::CustomInputSource_Button::CustomInputSource_Button()   {
}
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource_Joystick.get_systemId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int64_t> (::Rewired::Platforms::Custom::CustomInputSource_Joystick::*)()>(&::Rewired::Platforms::Custom::CustomInputSource_Joystick::get_systemId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051ea30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>(),
                        {"get_systemId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource_Joystick.set_systemId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomInputSource_Joystick::*)(::System::Nullable_1<int64_t>)>(&::Rewired::Platforms::Custom::CustomInputSource_Joystick::set_systemId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1817eed60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>(),
                        {"set_systemId", {}, {::i2c::type_of<::System::Nullable_1<int64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource_Joystick.get_unityId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Platforms::Custom::CustomInputSource_Joystick::*)()>(&::Rewired::Platforms::Custom::CustomInputSource_Joystick::get_unityId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>(),
                        {"get_unityId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource_Joystick.set_unityId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomInputSource_Joystick::*)(int32_t)>(&::Rewired::Platforms::Custom::CustomInputSource_Joystick::set_unityId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>(),
                        {"set_unityId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource_Joystick.get_Axes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::Rewired::Platforms::Custom::CustomInputSource_Axis*>* (::Rewired::Platforms::Custom::CustomInputSource_Joystick::*)()>(&::Rewired::Platforms::Custom::CustomInputSource_Joystick::get_Axes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18039fe40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>(),
                        {"get_Axes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource_Joystick.get_Buttons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::Rewired::Platforms::Custom::CustomInputSource_Button*>* (::Rewired::Platforms::Custom::CustomInputSource_Joystick::*)()>(&::Rewired::Platforms::Custom::CustomInputSource_Joystick::get_Buttons)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a74e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>(),
                        {"get_Buttons", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource_Joystick.get_supportsVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Platforms::Custom::CustomInputSource_Joystick::*)()>(&::Rewired::Platforms::Custom::CustomInputSource_Joystick::get_supportsVibration)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e56a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>(),
                        {"get_supportsVibration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource_Joystick.set_supportsVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomInputSource_Joystick::*)(bool)>(&::Rewired::Platforms::Custom::CustomInputSource_Joystick::set_supportsVibration)> {
  constexpr static std::size_t size = 0x1ac0;
  constexpr static std::size_t addrs = 0x1813bddf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>(),
                        {"set_supportsVibration", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource_Joystick.get_extension
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Controller_Extension* (::Rewired::Platforms::Custom::CustomInputSource_Joystick::*)()>(&::Rewired::Platforms::Custom::CustomInputSource_Joystick::get_extension)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>(),
                        {"get_extension", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource_Joystick.set_extension
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomInputSource_Joystick::*)(::Rewired::Controller_Extension*)>(&::Rewired::Platforms::Custom::CustomInputSource_Joystick::set_extension)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181881bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>(),
                        {"set_extension", {}, {::i2c::type_of<::Rewired::Controller_Extension*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource_Joystick.get_buttonCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Platforms::Custom::CustomInputSource_Joystick::*)()>(&::Rewired::Platforms::Custom::CustomInputSource_Joystick::get_buttonCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181881b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>(),
                        {"get_buttonCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource_Joystick.get_axisCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Platforms::Custom::CustomInputSource_Joystick::*)()>(&::Rewired::Platforms::Custom::CustomInputSource_Joystick::get_axisCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181881b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>(),
                        {"get_axisCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource_Joystick._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomInputSource_Joystick::*)(::StringW, int64_t, int32_t, int32_t)>(&::Rewired::Platforms::Custom::CustomInputSource_Joystick::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818819c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource_Joystick._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomInputSource_Joystick::*)(::StringW, ::System::Nullable_1<int64_t>, int32_t, int32_t, int32_t)>(&::Rewired::Platforms::Custom::CustomInputSource_Joystick::_ctor)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x181881810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Nullable_1<int64_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource_Joystick.GetAxisValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::Platforms::Custom::CustomInputSource_Joystick::*)(int32_t)>(&::Rewired::Platforms::Custom::CustomInputSource_Joystick::GetAxisValue)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181881680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource_Joystick.GetButtonValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Platforms::Custom::CustomInputSource_Joystick::*)(int32_t)>(&::Rewired::Platforms::Custom::CustomInputSource_Joystick::GetButtonValue)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181881700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource_Joystick.GetButtonFloatValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::Platforms::Custom::CustomInputSource_Joystick::*)(int32_t)>(&::Rewired::Platforms::Custom::CustomInputSource_Joystick::GetButtonFloatValue)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818816c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource_Joystick.SetAxisValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomInputSource_Joystick::*)(int32_t, float_t)>(&::Rewired::Platforms::Custom::CustomInputSource_Joystick::SetAxisValue)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181881740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource_Joystick.SetButtonValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomInputSource_Joystick::*)(int32_t, bool)>(&::Rewired::Platforms::Custom::CustomInputSource_Joystick::SetButtonValue)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818817c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource_Joystick.SetButtonFloatValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomInputSource_Joystick::*)(int32_t, float_t)>(&::Rewired::Platforms::Custom::CustomInputSource_Joystick::SetButtonFloatValue)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181881780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource_Joystick.ciBYAeFhtsMAsXlLpLpBwJfliFVn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomInputSource_Joystick::*)(int32_t, ::by_ref<bool>, ::by_ref<float_t>)>(&::Rewired::Platforms::Custom::CustomInputSource_Joystick::ciBYAeFhtsMAsXlLpLpBwJfliFVn)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181881ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>(),
                        {"ciBYAeFhtsMAsXlLpLpBwJfliFVn", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource_Joystick.jonGbJbzbOHyojKWqbDBkqmAIQmSA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomInputSource_Joystick::*)()>(&::Rewired::Platforms::Custom::CustomInputSource_Joystick::jonGbJbzbOHyojKWqbDBkqmAIQmSA)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181881b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>(), 11}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<int64_t>& Rewired::Platforms::Custom::CustomInputSource_Joystick::__cordl_internal_get_KzULjmdgyAdaATGMZXfHGfryywoS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KzULjmdgyAdaATGMZXfHGfryywoS;
}
constexpr ::System::Nullable_1<int64_t> const& Rewired::Platforms::Custom::CustomInputSource_Joystick::__cordl_internal_get_KzULjmdgyAdaATGMZXfHGfryywoS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KzULjmdgyAdaATGMZXfHGfryywoS;
}
constexpr void Rewired::Platforms::Custom::CustomInputSource_Joystick::__cordl_internal_set_KzULjmdgyAdaATGMZXfHGfryywoS(::System::Nullable_1<int64_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___KzULjmdgyAdaATGMZXfHGfryywoS = value;
}
constexpr int32_t& Rewired::Platforms::Custom::CustomInputSource_Joystick::__cordl_internal_get_ydAoSpoJiIOXmhROIaRikdLJEyLBA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ydAoSpoJiIOXmhROIaRikdLJEyLBA;
}
constexpr int32_t const& Rewired::Platforms::Custom::CustomInputSource_Joystick::__cordl_internal_get_ydAoSpoJiIOXmhROIaRikdLJEyLBA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ydAoSpoJiIOXmhROIaRikdLJEyLBA;
}
constexpr void Rewired::Platforms::Custom::CustomInputSource_Joystick::__cordl_internal_set_ydAoSpoJiIOXmhROIaRikdLJEyLBA(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ydAoSpoJiIOXmhROIaRikdLJEyLBA = value;
}
constexpr ::ArrayW<::Rewired::Platforms::Custom::CustomInputSource_Axis*>& Rewired::Platforms::Custom::CustomInputSource_Joystick::__cordl_internal_get_QHYeWpozKqvrSNFFjaukivCJveXTA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QHYeWpozKqvrSNFFjaukivCJveXTA;
}
constexpr ::ArrayW<::Rewired::Platforms::Custom::CustomInputSource_Axis*> const& Rewired::Platforms::Custom::CustomInputSource_Joystick::__cordl_internal_get_QHYeWpozKqvrSNFFjaukivCJveXTA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QHYeWpozKqvrSNFFjaukivCJveXTA;
}
constexpr void Rewired::Platforms::Custom::CustomInputSource_Joystick::__cordl_internal_set_QHYeWpozKqvrSNFFjaukivCJveXTA(::ArrayW<::Rewired::Platforms::Custom::CustomInputSource_Axis*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___QHYeWpozKqvrSNFFjaukivCJveXTA = value;
}
constexpr ::ArrayW<::Rewired::Platforms::Custom::CustomInputSource_Button*>& Rewired::Platforms::Custom::CustomInputSource_Joystick::__cordl_internal_get_YncdSlNBxkCYJbrSOmlFDMCdLPttA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___YncdSlNBxkCYJbrSOmlFDMCdLPttA;
}
constexpr ::ArrayW<::Rewired::Platforms::Custom::CustomInputSource_Button*> const& Rewired::Platforms::Custom::CustomInputSource_Joystick::__cordl_internal_get_YncdSlNBxkCYJbrSOmlFDMCdLPttA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___YncdSlNBxkCYJbrSOmlFDMCdLPttA;
}
constexpr void Rewired::Platforms::Custom::CustomInputSource_Joystick::__cordl_internal_set_YncdSlNBxkCYJbrSOmlFDMCdLPttA(::ArrayW<::Rewired::Platforms::Custom::CustomInputSource_Button*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___YncdSlNBxkCYJbrSOmlFDMCdLPttA = value;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Platforms::Custom::CustomInputSource_Axis*>*& Rewired::Platforms::Custom::CustomInputSource_Joystick::__cordl_internal_get_pVUQodXyBWgHtUxZKoyOsVYhdcIK()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pVUQodXyBWgHtUxZKoyOsVYhdcIK;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Platforms::Custom::CustomInputSource_Axis*>* const& Rewired::Platforms::Custom::CustomInputSource_Joystick::__cordl_internal_get_pVUQodXyBWgHtUxZKoyOsVYhdcIK() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pVUQodXyBWgHtUxZKoyOsVYhdcIK;
}
constexpr void Rewired::Platforms::Custom::CustomInputSource_Joystick::__cordl_internal_set_pVUQodXyBWgHtUxZKoyOsVYhdcIK(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Platforms::Custom::CustomInputSource_Axis*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pVUQodXyBWgHtUxZKoyOsVYhdcIK = value;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Platforms::Custom::CustomInputSource_Button*>*& Rewired::Platforms::Custom::CustomInputSource_Joystick::__cordl_internal_get_GGLBxnjvVqAiSOBbhvvaUXmTGgaH()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GGLBxnjvVqAiSOBbhvvaUXmTGgaH;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Platforms::Custom::CustomInputSource_Button*>* const& Rewired::Platforms::Custom::CustomInputSource_Joystick::__cordl_internal_get_GGLBxnjvVqAiSOBbhvvaUXmTGgaH() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GGLBxnjvVqAiSOBbhvvaUXmTGgaH;
}
constexpr void Rewired::Platforms::Custom::CustomInputSource_Joystick::__cordl_internal_set_GGLBxnjvVqAiSOBbhvvaUXmTGgaH(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Platforms::Custom::CustomInputSource_Button*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GGLBxnjvVqAiSOBbhvvaUXmTGgaH = value;
}
constexpr bool& Rewired::Platforms::Custom::CustomInputSource_Joystick::__cordl_internal_get_NPNXkNyAWJYarQtDFpRPpQppHLsO()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NPNXkNyAWJYarQtDFpRPpQppHLsO;
}
constexpr bool const& Rewired::Platforms::Custom::CustomInputSource_Joystick::__cordl_internal_get_NPNXkNyAWJYarQtDFpRPpQppHLsO() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NPNXkNyAWJYarQtDFpRPpQppHLsO;
}
constexpr void Rewired::Platforms::Custom::CustomInputSource_Joystick::__cordl_internal_set_NPNXkNyAWJYarQtDFpRPpQppHLsO(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NPNXkNyAWJYarQtDFpRPpQppHLsO = value;
}
constexpr ::Rewired::Controller_Extension*& Rewired::Platforms::Custom::CustomInputSource_Joystick::__cordl_internal_get_CbTjcLKtkZcBeWKArZMMbzwJyZuGA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CbTjcLKtkZcBeWKArZMMbzwJyZuGA;
}
constexpr ::Rewired::Controller_Extension* const& Rewired::Platforms::Custom::CustomInputSource_Joystick::__cordl_internal_get_CbTjcLKtkZcBeWKArZMMbzwJyZuGA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CbTjcLKtkZcBeWKArZMMbzwJyZuGA;
}
constexpr void Rewired::Platforms::Custom::CustomInputSource_Joystick::__cordl_internal_set_CbTjcLKtkZcBeWKArZMMbzwJyZuGA(::Rewired::Controller_Extension*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CbTjcLKtkZcBeWKArZMMbzwJyZuGA = value;
}
inline ::System::Nullable_1<int64_t> Rewired::Platforms::Custom::CustomInputSource_Joystick::get_systemId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>(),
                        {"get_systemId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int64_t>>(this, ___internal_method);
}
inline void Rewired::Platforms::Custom::CustomInputSource_Joystick::set_systemId(::System::Nullable_1<int64_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>(),
                        {"set_systemId", {}, {::i2c::type_of<::System::Nullable_1<int64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Rewired::Platforms::Custom::CustomInputSource_Joystick::get_unityId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>(),
                        {"get_unityId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::Platforms::Custom::CustomInputSource_Joystick::set_unityId(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>(),
                        {"set_unityId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IList_1<::Rewired::Platforms::Custom::CustomInputSource_Axis*>* Rewired::Platforms::Custom::CustomInputSource_Joystick::get_Axes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>(),
                        {"get_Axes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Rewired::Platforms::Custom::CustomInputSource_Axis*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::Rewired::Platforms::Custom::CustomInputSource_Button*>* Rewired::Platforms::Custom::CustomInputSource_Joystick::get_Buttons()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>(),
                        {"get_Buttons", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Rewired::Platforms::Custom::CustomInputSource_Button*>*>(this, ___internal_method);
}
inline bool Rewired::Platforms::Custom::CustomInputSource_Joystick::get_supportsVibration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>(),
                        {"get_supportsVibration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Platforms::Custom::CustomInputSource_Joystick::set_supportsVibration(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>(),
                        {"set_supportsVibration", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::Controller_Extension* Rewired::Platforms::Custom::CustomInputSource_Joystick::get_extension()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>(),
                        {"get_extension", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Controller_Extension*>(this, ___internal_method);
}
inline void Rewired::Platforms::Custom::CustomInputSource_Joystick::set_extension(::Rewired::Controller_Extension*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>(),
                        {"set_extension", {}, {::i2c::type_of<::Rewired::Controller_Extension*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Rewired::Platforms::Custom::CustomInputSource_Joystick::get_buttonCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>(),
                        {"get_buttonCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Rewired::Platforms::Custom::CustomInputSource_Joystick::get_axisCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>(),
                        {"get_axisCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::Platforms::Custom::CustomInputSource_Joystick::_ctor(::StringW  _cordl_fixed_empty_name_whitespace, int64_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3);
}
inline void Rewired::Platforms::Custom::CustomInputSource_Joystick::_ctor(::StringW  _cordl_fixed_empty_name_whitespace, ::System::Nullable_1<int64_t>  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3, int32_t  _cordl_fixed_empty_name_whitespace_param_4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Nullable_1<int64_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4);
}
inline float_t Rewired::Platforms::Custom::CustomInputSource_Joystick::GetAxisValue(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, index);
}
inline bool Rewired::Platforms::Custom::CustomInputSource_Joystick::GetButtonValue(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index);
}
inline float_t Rewired::Platforms::Custom::CustomInputSource_Joystick::GetButtonFloatValue(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, index);
}
inline void Rewired::Platforms::Custom::CustomInputSource_Joystick::SetAxisValue(int32_t  index, float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline void Rewired::Platforms::Custom::CustomInputSource_Joystick::SetButtonValue(int32_t  index, bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline void Rewired::Platforms::Custom::CustomInputSource_Joystick::SetButtonFloatValue(int32_t  index, float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline void Rewired::Platforms::Custom::CustomInputSource_Joystick::ciBYAeFhtsMAsXlLpLpBwJfliFVn(int32_t  _cordl_fixed_empty_name_whitespace, ::by_ref<bool>  _cordl_fixed_empty_name_whitespace_param_1, ::by_ref<float_t>  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>(),
                        {"ciBYAeFhtsMAsXlLpLpBwJfliFVn", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline void Rewired::Platforms::Custom::CustomInputSource_Joystick::jonGbJbzbOHyojKWqbDBkqmAIQmSA()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Platforms::Custom::CustomInputSource_Joystick* Rewired::Platforms::Custom::CustomInputSource_Joystick::New_ctor(::StringW  _cordl_fixed_empty_name_whitespace, int64_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3));
}
inline ::Rewired::Platforms::Custom::CustomInputSource_Joystick* Rewired::Platforms::Custom::CustomInputSource_Joystick::New_ctor(::StringW  _cordl_fixed_empty_name_whitespace, ::System::Nullable_1<int64_t>  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3, int32_t  _cordl_fixed_empty_name_whitespace_param_4)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4));
}
// Ctor Parameters []
constexpr ::Rewired::Platforms::Custom::CustomInputSource_Joystick::CustomInputSource_Joystick()   {
}
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource.get_useApproximateMatching
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Platforms::Custom::CustomInputSource::*)()>(&::Rewired::Platforms::Custom::CustomInputSource::get_useApproximateMatching)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(),
                        {"get_useApproximateMatching", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource.set_useApproximateMatching
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomInputSource::*)(bool)>(&::Rewired::Platforms::Custom::CustomInputSource::set_useApproximateMatching)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803cc020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(),
                        {"set_useApproximateMatching", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource.kFbPyBoWCeZrASiELSfdRzwYTobc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomInputSource::*)(::System::Action*)>(&::Rewired::Platforms::Custom::CustomInputSource::kFbPyBoWCeZrASiELSfdRzwYTobc)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18062c460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(),
                        {"kFbPyBoWCeZrASiELSfdRzwYTobc", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource.qzqYHbhjgPQSjwVgwGSFtgqXKAom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomInputSource::*)(::System::Action*)>(&::Rewired::Platforms::Custom::CustomInputSource::qzqYHbhjgPQSjwVgwGSFtgqXKAom)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18062c5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(),
                        {"qzqYHbhjgPQSjwVgwGSFtgqXKAom", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource.loSYjVMZvlBRqssnSkqODONIlbOl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomInputSource::*)(::System::Action*)>(&::Rewired::Platforms::Custom::CustomInputSource::loSYjVMZvlBRqssnSkqODONIlbOl)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18062c4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(),
                        {"loSYjVMZvlBRqssnSkqODONIlbOl", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource.EaHYmXRsOqetdvIQoATJJrHnfnMEA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomInputSource::*)(::System::Action*)>(&::Rewired::Platforms::Custom::CustomInputSource::EaHYmXRsOqetdvIQoATJJrHnfnMEA)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18062c670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(),
                        {"EaHYmXRsOqetdvIQoATJJrHnfnMEA", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource.nUuyEnjvGpKcUNGQKLoWSYWKhHLn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomInputSource::*)(::System::Action*)>(&::Rewired::Platforms::Custom::CustomInputSource::nUuyEnjvGpKcUNGQKLoWSYWKhHLn)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18062c460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(),
                        {"nUuyEnjvGpKcUNGQKLoWSYWKhHLn", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource.zgxRUUsgCAfHbgIeSopBcSMCulMc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomInputSource::*)(::System::Action*)>(&::Rewired::Platforms::Custom::CustomInputSource::zgxRUUsgCAfHbgIeSopBcSMCulMc)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18062c5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(),
                        {"zgxRUUsgCAfHbgIeSopBcSMCulMc", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource.CyFvxHSzaPybaIpPBBSMDyIhxQBb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomInputSource::*)(::System::Action*)>(&::Rewired::Platforms::Custom::CustomInputSource::CyFvxHSzaPybaIpPBBSMDyIhxQBb)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18062c4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(),
                        {"CyFvxHSzaPybaIpPBBSMDyIhxQBb", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource.YuLmZqeRZzjIfFDXTFbUkaYnikkK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomInputSource::*)(::System::Action*)>(&::Rewired::Platforms::Custom::CustomInputSource::YuLmZqeRZzjIfFDXTFbUkaYnikkK)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18062c670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(),
                        {"YuLmZqeRZzjIfFDXTFbUkaYnikkK", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource.BwqGWxvNuOgmhXXYqKqGfpebWsHq
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::InputSource (::Rewired::Platforms::Custom::CustomInputSource::*)()>(&::Rewired::Platforms::Custom::CustomInputSource::BwqGWxvNuOgmhXXYqKqGfpebWsHq)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(),
                        {"BwqGWxvNuOgmhXXYqKqGfpebWsHq", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource.LlZgepKewlNrVuDxFsWDQObnSCwM
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Interfaces::IUnifiedKeyboardSource* (::Rewired::Platforms::Custom::CustomInputSource::*)()>(&::Rewired::Platforms::Custom::CustomInputSource::LlZgepKewlNrVuDxFsWDQObnSCwM)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(),
                        {"LlZgepKewlNrVuDxFsWDQObnSCwM", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource.GyTfLCfjJGNNbgEyetKAynjmyntFA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Interfaces::IUnifiedMouseSource* (::Rewired::Platforms::Custom::CustomInputSource::*)()>(&::Rewired::Platforms::Custom::CustomInputSource::GyTfLCfjJGNNbgEyetKAynjmyntFA)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(),
                        {"GyTfLCfjJGNNbgEyetKAynjmyntFA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomInputSource::*)(int32_t)>(&::Rewired::Platforms::Custom::CustomInputSource::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18187eb60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomInputSource::*)(int32_t, ::Rewired::Interfaces::IUnifiedKeyboardSource*, ::Rewired::Interfaces::IUnifiedMouseSource*)>(&::Rewired::Platforms::Custom::CustomInputSource::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18187eb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::Interfaces::IUnifiedKeyboardSource*>(), ::i2c::type_of<::Rewired::Interfaces::IUnifiedMouseSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource.IaRVALOxwNNtYeNThPAvKFkoJEzy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomInputSource::*)()>(&::Rewired::Platforms::Custom::CustomInputSource::IaRVALOxwNNtYeNThPAvKFkoJEzy)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x181163b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource.OnInitialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomInputSource::*)()>(&::Rewired::Platforms::Custom::CustomInputSource::OnInitialize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource.AddJoystick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomInputSource::*)(::Rewired::Platforms::Custom::CustomInputSource_Joystick*)>(&::Rewired::Platforms::Custom::CustomInputSource::AddJoystick)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18187e5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(),
                        {"AddJoystick", {}, {::i2c::type_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource.RemoveJoystick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomInputSource::*)(::Rewired::Platforms::Custom::CustomInputSource_Joystick*)>(&::Rewired::Platforms::Custom::CustomInputSource::RemoveJoystick)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18187e9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(),
                        {"RemoveJoystick", {}, {::i2c::type_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource.GetJoysticks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>* (::Rewired::Platforms::Custom::CustomInputSource::*)()>(&::Rewired::Platforms::Custom::CustomInputSource::GetJoysticks)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(),
                        {"GetJoysticks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource.OnJoystickConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomInputSource::*)()>(&::Rewired::Platforms::Custom::CustomInputSource::OnJoystickConnected)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18187e8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource.OnJoystickDisconnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomInputSource::*)()>(&::Rewired::Platforms::Custom::CustomInputSource::OnJoystickDisconnected)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18187e8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource.BhpfXTMFOtIrRdvRvmcNSHBzwBgQA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomInputSource::*)(bool)>(&::Rewired::Platforms::Custom::CustomInputSource::BhpfXTMFOtIrRdvRvmcNSHBzwBgQA)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18187e770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(),
                        {"BhpfXTMFOtIrRdvRvmcNSHBzwBgQA", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource.PtFmrZzXmmrPCmzllUqEkHGtVUbf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Rewired::Platforms::Custom::CustomInputSource_Joystick*> (::Rewired::Platforms::Custom::CustomInputSource::*)()>(&::Rewired::Platforms::Custom::CustomInputSource::PtFmrZzXmmrPCmzllUqEkHGtVUbf)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18187e8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(),
                        {"PtFmrZzXmmrPCmzllUqEkHGtVUbf", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource.ycBYLnACizIPIiNjCFxwSzcoodJIA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomInputSource::*)()>(&::Rewired::Platforms::Custom::CustomInputSource::ycBYLnACizIPIiNjCFxwSzcoodJIA)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomInputSource::*)()>(&::Rewired::Platforms::Custom::CustomInputSource::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1815e7730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomInputSource::*)()>(&::Rewired::Platforms::Custom::CustomInputSource::Finalize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1815e7430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomInputSource::*)(bool)>(&::Rewired::Platforms::Custom::CustomInputSource::Dispose)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18187e7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource.get_isReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Platforms::Custom::CustomInputSource::*)()>(&::Rewired::Platforms::Custom::CustomInputSource::get_isReady)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomInputSource.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomInputSource::*)()>(&::Rewired::Platforms::Custom::CustomInputSource::Update)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(), 13}
                ));
    return ___internal_method;
  }
};
constexpr ::Rewired::InputSource& Rewired::Platforms::Custom::CustomInputSource::__cordl_internal_get_dziOWgRRbVHQaBVOMcFLucbwjDjr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dziOWgRRbVHQaBVOMcFLucbwjDjr;
}
constexpr ::Rewired::InputSource const& Rewired::Platforms::Custom::CustomInputSource::__cordl_internal_get_dziOWgRRbVHQaBVOMcFLucbwjDjr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dziOWgRRbVHQaBVOMcFLucbwjDjr;
}
constexpr void Rewired::Platforms::Custom::CustomInputSource::__cordl_internal_set_dziOWgRRbVHQaBVOMcFLucbwjDjr(::Rewired::InputSource  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dziOWgRRbVHQaBVOMcFLucbwjDjr = value;
}
constexpr ::System::Collections::Generic::List_1<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>*& Rewired::Platforms::Custom::CustomInputSource::__cordl_internal_get_RiCAqLZRGrvfsTpCmHBxByKKEziPA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RiCAqLZRGrvfsTpCmHBxByKKEziPA;
}
constexpr ::System::Collections::Generic::List_1<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>* const& Rewired::Platforms::Custom::CustomInputSource::__cordl_internal_get_RiCAqLZRGrvfsTpCmHBxByKKEziPA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RiCAqLZRGrvfsTpCmHBxByKKEziPA;
}
constexpr void Rewired::Platforms::Custom::CustomInputSource::__cordl_internal_set_RiCAqLZRGrvfsTpCmHBxByKKEziPA(::System::Collections::Generic::List_1<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RiCAqLZRGrvfsTpCmHBxByKKEziPA = value;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>*& Rewired::Platforms::Custom::CustomInputSource::__cordl_internal_get_qWWaAzzkZrUmhgENEYZlnOKHAXxp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___qWWaAzzkZrUmhgENEYZlnOKHAXxp;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>* const& Rewired::Platforms::Custom::CustomInputSource::__cordl_internal_get_qWWaAzzkZrUmhgENEYZlnOKHAXxp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___qWWaAzzkZrUmhgENEYZlnOKHAXxp;
}
constexpr void Rewired::Platforms::Custom::CustomInputSource::__cordl_internal_set_qWWaAzzkZrUmhgENEYZlnOKHAXxp(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___qWWaAzzkZrUmhgENEYZlnOKHAXxp = value;
}
constexpr bool& Rewired::Platforms::Custom::CustomInputSource::__cordl_internal_get_IHlVFsjOfHyuNsfwugPFdnGXJkfhb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IHlVFsjOfHyuNsfwugPFdnGXJkfhb;
}
constexpr bool const& Rewired::Platforms::Custom::CustomInputSource::__cordl_internal_get_IHlVFsjOfHyuNsfwugPFdnGXJkfhb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IHlVFsjOfHyuNsfwugPFdnGXJkfhb;
}
constexpr void Rewired::Platforms::Custom::CustomInputSource::__cordl_internal_set_IHlVFsjOfHyuNsfwugPFdnGXJkfhb(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IHlVFsjOfHyuNsfwugPFdnGXJkfhb = value;
}
constexpr ::Rewired::Interfaces::IUnifiedKeyboardSource*& Rewired::Platforms::Custom::CustomInputSource::__cordl_internal_get_sdbYLOXkGVIpXKaZYEBnEzcVWIFK()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sdbYLOXkGVIpXKaZYEBnEzcVWIFK;
}
constexpr ::Rewired::Interfaces::IUnifiedKeyboardSource* const& Rewired::Platforms::Custom::CustomInputSource::__cordl_internal_get_sdbYLOXkGVIpXKaZYEBnEzcVWIFK() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sdbYLOXkGVIpXKaZYEBnEzcVWIFK;
}
constexpr void Rewired::Platforms::Custom::CustomInputSource::__cordl_internal_set_sdbYLOXkGVIpXKaZYEBnEzcVWIFK(::Rewired::Interfaces::IUnifiedKeyboardSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sdbYLOXkGVIpXKaZYEBnEzcVWIFK = value;
}
constexpr ::Rewired::Interfaces::IUnifiedMouseSource*& Rewired::Platforms::Custom::CustomInputSource::__cordl_internal_get_GjBmLdGunNAFHWRXRGqqeOGewtAA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GjBmLdGunNAFHWRXRGqqeOGewtAA;
}
constexpr ::Rewired::Interfaces::IUnifiedMouseSource* const& Rewired::Platforms::Custom::CustomInputSource::__cordl_internal_get_GjBmLdGunNAFHWRXRGqqeOGewtAA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GjBmLdGunNAFHWRXRGqqeOGewtAA;
}
constexpr void Rewired::Platforms::Custom::CustomInputSource::__cordl_internal_set_GjBmLdGunNAFHWRXRGqqeOGewtAA(::Rewired::Interfaces::IUnifiedMouseSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GjBmLdGunNAFHWRXRGqqeOGewtAA = value;
}
constexpr ::System::Action*& Rewired::Platforms::Custom::CustomInputSource::__cordl_internal_get_ErxcwlPPmzZZfMXLVdAMDqgVeIaKA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ErxcwlPPmzZZfMXLVdAMDqgVeIaKA;
}
constexpr ::System::Action* const& Rewired::Platforms::Custom::CustomInputSource::__cordl_internal_get_ErxcwlPPmzZZfMXLVdAMDqgVeIaKA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ErxcwlPPmzZZfMXLVdAMDqgVeIaKA;
}
constexpr void Rewired::Platforms::Custom::CustomInputSource::__cordl_internal_set_ErxcwlPPmzZZfMXLVdAMDqgVeIaKA(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ErxcwlPPmzZZfMXLVdAMDqgVeIaKA = value;
}
constexpr ::System::Action*& Rewired::Platforms::Custom::CustomInputSource::__cordl_internal_get_WvcaYIdFBeMMLAEKIAZTuaFbLBot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WvcaYIdFBeMMLAEKIAZTuaFbLBot;
}
constexpr ::System::Action* const& Rewired::Platforms::Custom::CustomInputSource::__cordl_internal_get_WvcaYIdFBeMMLAEKIAZTuaFbLBot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WvcaYIdFBeMMLAEKIAZTuaFbLBot;
}
constexpr void Rewired::Platforms::Custom::CustomInputSource::__cordl_internal_set_WvcaYIdFBeMMLAEKIAZTuaFbLBot(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WvcaYIdFBeMMLAEKIAZTuaFbLBot = value;
}
constexpr bool& Rewired::Platforms::Custom::CustomInputSource::__cordl_internal_get_kojqcwYyCJbvkLgxxOKLLyrWngnH()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___kojqcwYyCJbvkLgxxOKLLyrWngnH;
}
constexpr bool const& Rewired::Platforms::Custom::CustomInputSource::__cordl_internal_get_kojqcwYyCJbvkLgxxOKLLyrWngnH() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___kojqcwYyCJbvkLgxxOKLLyrWngnH;
}
constexpr void Rewired::Platforms::Custom::CustomInputSource::__cordl_internal_set_kojqcwYyCJbvkLgxxOKLLyrWngnH(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___kojqcwYyCJbvkLgxxOKLLyrWngnH = value;
}
inline bool Rewired::Platforms::Custom::CustomInputSource::get_useApproximateMatching()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(),
                        {"get_useApproximateMatching", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Platforms::Custom::CustomInputSource::set_useApproximateMatching(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(),
                        {"set_useApproximateMatching", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Platforms::Custom::CustomInputSource::kFbPyBoWCeZrASiELSfdRzwYTobc(::System::Action*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(),
                        {"kFbPyBoWCeZrASiELSfdRzwYTobc", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Platforms::Custom::CustomInputSource::qzqYHbhjgPQSjwVgwGSFtgqXKAom(::System::Action*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(),
                        {"qzqYHbhjgPQSjwVgwGSFtgqXKAom", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Platforms::Custom::CustomInputSource::loSYjVMZvlBRqssnSkqODONIlbOl(::System::Action*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(),
                        {"loSYjVMZvlBRqssnSkqODONIlbOl", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Platforms::Custom::CustomInputSource::EaHYmXRsOqetdvIQoATJJrHnfnMEA(::System::Action*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(),
                        {"EaHYmXRsOqetdvIQoATJJrHnfnMEA", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Platforms::Custom::CustomInputSource::nUuyEnjvGpKcUNGQKLoWSYWKhHLn(::System::Action*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(),
                        {"nUuyEnjvGpKcUNGQKLoWSYWKhHLn", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Platforms::Custom::CustomInputSource::zgxRUUsgCAfHbgIeSopBcSMCulMc(::System::Action*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(),
                        {"zgxRUUsgCAfHbgIeSopBcSMCulMc", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Platforms::Custom::CustomInputSource::CyFvxHSzaPybaIpPBBSMDyIhxQBb(::System::Action*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(),
                        {"CyFvxHSzaPybaIpPBBSMDyIhxQBb", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Platforms::Custom::CustomInputSource::YuLmZqeRZzjIfFDXTFbUkaYnikkK(::System::Action*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(),
                        {"YuLmZqeRZzjIfFDXTFbUkaYnikkK", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::InputSource Rewired::Platforms::Custom::CustomInputSource::BwqGWxvNuOgmhXXYqKqGfpebWsHq()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(),
                        {"BwqGWxvNuOgmhXXYqKqGfpebWsHq", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::InputSource>(this, ___internal_method);
}
inline ::Rewired::Interfaces::IUnifiedKeyboardSource* Rewired::Platforms::Custom::CustomInputSource::LlZgepKewlNrVuDxFsWDQObnSCwM()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(),
                        {"LlZgepKewlNrVuDxFsWDQObnSCwM", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Interfaces::IUnifiedKeyboardSource*>(this, ___internal_method);
}
inline ::Rewired::Interfaces::IUnifiedMouseSource* Rewired::Platforms::Custom::CustomInputSource::GyTfLCfjJGNNbgEyetKAynjmyntFA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(),
                        {"GyTfLCfjJGNNbgEyetKAynjmyntFA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Interfaces::IUnifiedMouseSource*>(this, ___internal_method);
}
inline void Rewired::Platforms::Custom::CustomInputSource::_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Platforms::Custom::CustomInputSource::_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::Interfaces::IUnifiedKeyboardSource*  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::Interfaces::IUnifiedMouseSource*  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::Interfaces::IUnifiedKeyboardSource*>(), ::i2c::type_of<::Rewired::Interfaces::IUnifiedMouseSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline void Rewired::Platforms::Custom::CustomInputSource::IaRVALOxwNNtYeNThPAvKFkoJEzy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Platforms::Custom::CustomInputSource::OnInitialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Platforms::Custom::CustomInputSource::AddJoystick(::Rewired::Platforms::Custom::CustomInputSource_Joystick*  joystick)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(),
                        {"AddJoystick", {}, {::i2c::type_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, joystick);
}
inline void Rewired::Platforms::Custom::CustomInputSource::RemoveJoystick(::Rewired::Platforms::Custom::CustomInputSource_Joystick*  joystick)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(),
                        {"RemoveJoystick", {}, {::i2c::type_of<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, joystick);
}
inline ::System::Collections::Generic::IList_1<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>* Rewired::Platforms::Custom::CustomInputSource::GetJoysticks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(),
                        {"GetJoysticks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>*>(this, ___internal_method);
}
inline void Rewired::Platforms::Custom::CustomInputSource::OnJoystickConnected()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Platforms::Custom::CustomInputSource::OnJoystickDisconnected()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Platforms::Custom::CustomInputSource::BhpfXTMFOtIrRdvRvmcNSHBzwBgQA(bool  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(),
                        {"BhpfXTMFOtIrRdvRvmcNSHBzwBgQA", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::ArrayW<::Rewired::Platforms::Custom::CustomInputSource_Joystick*> Rewired::Platforms::Custom::CustomInputSource::PtFmrZzXmmrPCmzllUqEkHGtVUbf()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(),
                        {"PtFmrZzXmmrPCmzllUqEkHGtVUbf", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Rewired::Platforms::Custom::CustomInputSource_Joystick*>>(this, ___internal_method);
}
inline void Rewired::Platforms::Custom::CustomInputSource::ycBYLnACizIPIiNjCFxwSzcoodJIA()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Platforms::Custom::CustomInputSource::Dispose()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Platforms::Custom::CustomInputSource::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Platforms::Custom::CustomInputSource::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline bool Rewired::Platforms::Custom::CustomInputSource::get_isReady()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Platforms::Custom::CustomInputSource::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::CustomInputSource*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Platforms::Custom::CustomInputSource* Rewired::Platforms::Custom::CustomInputSource::New_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Platforms::Custom::CustomInputSource*>(_cordl_fixed_empty_name_whitespace));
}
inline ::Rewired::Platforms::Custom::CustomInputSource* Rewired::Platforms::Custom::CustomInputSource::New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::Interfaces::IUnifiedKeyboardSource*  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::Interfaces::IUnifiedMouseSource*  _cordl_fixed_empty_name_whitespace_param_2)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Platforms::Custom::CustomInputSource*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Rewired::Platforms::Custom::CustomInputSource::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Rewired::Platforms::Custom::CustomInputSource::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::Platforms::Custom::CustomInputSource::CustomInputSource()   {
}
