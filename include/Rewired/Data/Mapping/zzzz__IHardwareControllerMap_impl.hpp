#pragma once
// IWYU pragma private; include "Rewired/Data/Mapping/IHardwareControllerMap.hpp"
#include "Rewired/Data/Mapping/zzzz__IHardwareControllerMap_def.hpp"
//  Writing Method size for method: ::Rewired::Data::Mapping::IHardwareControllerMap.GetElementIdentifierNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::Rewired::Data::Mapping::IHardwareControllerMap::*)()>(&::Rewired::Data::Mapping::IHardwareControllerMap::GetElementIdentifierNames)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::Mapping::IHardwareControllerMap*>(),
                    {::i2c::class_of<::Rewired::Data::Mapping::IHardwareControllerMap*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::IHardwareControllerMap.GetElementIdentifierIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::Rewired::Data::Mapping::IHardwareControllerMap::*)()>(&::Rewired::Data::Mapping::IHardwareControllerMap::GetElementIdentifierIds)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::Mapping::IHardwareControllerMap*>(),
                    {::i2c::class_of<::Rewired::Data::Mapping::IHardwareControllerMap*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::IHardwareControllerMap.ContainsElementIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::Mapping::IHardwareControllerMap::*)(int32_t)>(&::Rewired::Data::Mapping::IHardwareControllerMap::ContainsElementIdentifier)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::Mapping::IHardwareControllerMap*>(),
                    {::i2c::class_of<::Rewired::Data::Mapping::IHardwareControllerMap*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::IHardwareControllerMap.GetMappableElementIdentifierInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Data::Mapping::IHardwareControllerMap::*)(::by_ref<::ArrayW<::StringW>>, ::by_ref<::ArrayW<int32_t>>)>(&::Rewired::Data::Mapping::IHardwareControllerMap::GetMappableElementIdentifierInfo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::Mapping::IHardwareControllerMap*>(),
                    {::i2c::class_of<::Rewired::Data::Mapping::IHardwareControllerMap*>(), 3}
                ));
    return ___internal_method;
  }
};
inline ::ArrayW<::StringW> Rewired::Data::Mapping::IHardwareControllerMap::GetElementIdentifierNames()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::Mapping::IHardwareControllerMap*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::ArrayW<int32_t> Rewired::Data::Mapping::IHardwareControllerMap::GetElementIdentifierIds()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::Mapping::IHardwareControllerMap*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline bool Rewired::Data::Mapping::IHardwareControllerMap::ContainsElementIdentifier(int32_t  id)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::Mapping::IHardwareControllerMap*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id);
}
inline int32_t Rewired::Data::Mapping::IHardwareControllerMap::GetMappableElementIdentifierInfo(::by_ref<::ArrayW<::StringW>>  names, ::by_ref<::ArrayW<int32_t>>  ids)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::Mapping::IHardwareControllerMap*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, names, ids);
}
