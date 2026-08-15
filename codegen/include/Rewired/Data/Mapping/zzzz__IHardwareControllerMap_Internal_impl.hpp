#pragma once
// IWYU pragma private; include "Rewired/Data/Mapping/IHardwareControllerMap_Internal.hpp"
#include "Rewired/Data/Mapping/zzzz__IHardwareControllerMap_Internal_def.hpp"
#include "Rewired/Interfaces/zzzz__IControllerElementIdentifierCommon_Internal_def.hpp"
#include "Rewired/zzzz__ControllerType_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::Rewired::Data::Mapping::IHardwareControllerMap_Internal.get_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::Mapping::IHardwareControllerMap_Internal::*)()>(&::Rewired::Data::Mapping::IHardwareControllerMap_Internal::get_name)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::Mapping::IHardwareControllerMap_Internal*>(),
                    {::i2c::class_of<::Rewired::Data::Mapping::IHardwareControllerMap_Internal*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::IHardwareControllerMap_Internal.get_typeGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::Rewired::Data::Mapping::IHardwareControllerMap_Internal::*)()>(&::Rewired::Data::Mapping::IHardwareControllerMap_Internal::get_typeGuid)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::Mapping::IHardwareControllerMap_Internal*>(),
                    {::i2c::class_of<::Rewired::Data::Mapping::IHardwareControllerMap_Internal*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::IHardwareControllerMap_Internal.get_typeKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::Mapping::IHardwareControllerMap_Internal::*)()>(&::Rewired::Data::Mapping::IHardwareControllerMap_Internal::get_typeKey)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::Mapping::IHardwareControllerMap_Internal*>(),
                    {::i2c::class_of<::Rewired::Data::Mapping::IHardwareControllerMap_Internal*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::IHardwareControllerMap_Internal.get_controllerType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerType (::Rewired::Data::Mapping::IHardwareControllerMap_Internal::*)()>(&::Rewired::Data::Mapping::IHardwareControllerMap_Internal::get_controllerType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::Mapping::IHardwareControllerMap_Internal*>(),
                    {::i2c::class_of<::Rewired::Data::Mapping::IHardwareControllerMap_Internal*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::IHardwareControllerMap_Internal.get_ElementIdentifiers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*>* (::Rewired::Data::Mapping::IHardwareControllerMap_Internal::*)()>(&::Rewired::Data::Mapping::IHardwareControllerMap_Internal::get_ElementIdentifiers)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::Mapping::IHardwareControllerMap_Internal*>(),
                    {::i2c::class_of<::Rewired::Data::Mapping::IHardwareControllerMap_Internal*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::IHardwareControllerMap_Internal.GetElementIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal* (::Rewired::Data::Mapping::IHardwareControllerMap_Internal::*)(int32_t)>(&::Rewired::Data::Mapping::IHardwareControllerMap_Internal::GetElementIdentifier)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::Mapping::IHardwareControllerMap_Internal*>(),
                    {::i2c::class_of<::Rewired::Data::Mapping::IHardwareControllerMap_Internal*>(), 5}
                ));
    return ___internal_method;
  }
};
inline ::StringW Rewired::Data::Mapping::IHardwareControllerMap_Internal::get_name()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::Mapping::IHardwareControllerMap_Internal*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Guid Rewired::Data::Mapping::IHardwareControllerMap_Internal::get_typeGuid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::Mapping::IHardwareControllerMap_Internal*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline ::StringW Rewired::Data::Mapping::IHardwareControllerMap_Internal::get_typeKey()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::Mapping::IHardwareControllerMap_Internal*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Rewired::ControllerType Rewired::Data::Mapping::IHardwareControllerMap_Internal::get_controllerType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::Mapping::IHardwareControllerMap_Internal*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerType>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*>* Rewired::Data::Mapping::IHardwareControllerMap_Internal::get_ElementIdentifiers()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::Mapping::IHardwareControllerMap_Internal*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*>*>(this, ___internal_method);
}
inline ::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal* Rewired::Data::Mapping::IHardwareControllerMap_Internal::GetElementIdentifier(int32_t  id)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::Mapping::IHardwareControllerMap_Internal*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*>(this, ___internal_method, id);
}
