#pragma once
// IWYU pragma private; include "MA/Flora/BatchPropertyInfo.hpp"
#include "MA/Flora/zzzz__BatchPropertyInfo_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: ::MA::Flora::BatchPropertyInfo.get_IsCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::BatchPropertyInfo::*)()>(&::MA::Flora::BatchPropertyInfo::get_IsCreated)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181458fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchPropertyInfo>(),
                        {"get_IsCreated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchPropertyInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::BatchPropertyInfo::*)(int32_t, int32_t, bool, bool)>(&::MA::Flora::BatchPropertyInfo::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181458f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchPropertyInfo>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchPropertyInfo.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::BatchPropertyInfo::*)(::MA::Flora::BatchPropertyInfo)>(&::MA::Flora::BatchPropertyInfo::Equals)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181458eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchPropertyInfo>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::BatchPropertyInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchPropertyInfo.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::BatchPropertyInfo::*)(::MA::Flora::BatchPropertyInfo)>(&::MA::Flora::BatchPropertyInfo::CompareTo)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181458e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchPropertyInfo>(),
                        {"CompareTo", {}, {::i2c::type_of<::MA::Flora::BatchPropertyInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchPropertyInfo.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::BatchPropertyInfo::*)()>(&::MA::Flora::BatchPropertyInfo::GetHashCode)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181458f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::BatchPropertyInfo>(),
                    {::i2c::class_of<::MA::Flora::BatchPropertyInfo>(), 2}
                ));
    return ___internal_method;
  }
};
inline bool MA::Flora::BatchPropertyInfo::get_IsCreated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchPropertyInfo>(),
                        {"get_IsCreated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void MA::Flora::BatchPropertyInfo::_ctor(int32_t  nameID, int32_t  typeSizeInBytes, bool  isOverriden, bool  isPerInstance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchPropertyInfo>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, nameID, typeSizeInBytes, isOverriden, isPerInstance);
}
inline bool MA::Flora::BatchPropertyInfo::Equals(::MA::Flora::BatchPropertyInfo  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchPropertyInfo>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::BatchPropertyInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t MA::Flora::BatchPropertyInfo::CompareTo(::MA::Flora::BatchPropertyInfo  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchPropertyInfo>(),
                        {"CompareTo", {}, {::i2c::type_of<::MA::Flora::BatchPropertyInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline int32_t MA::Flora::BatchPropertyInfo::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::BatchPropertyInfo>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::BatchPropertyInfo>"
constexpr  MA::Flora::BatchPropertyInfo::operator ::System::IEquatable_1<::MA::Flora::BatchPropertyInfo>*()  {
return static_cast<::System::IEquatable_1<::MA::Flora::BatchPropertyInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::MA::Flora::BatchPropertyInfo>"
constexpr ::System::IEquatable_1<::MA::Flora::BatchPropertyInfo>* MA::Flora::BatchPropertyInfo::i___System__IEquatable_1___MA__Flora__BatchPropertyInfo_()  {
return static_cast<::System::IEquatable_1<::MA::Flora::BatchPropertyInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::MA::Flora::BatchPropertyInfo>"
constexpr  MA::Flora::BatchPropertyInfo::operator ::System::IComparable_1<::MA::Flora::BatchPropertyInfo>*()  {
return static_cast<::System::IComparable_1<::MA::Flora::BatchPropertyInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::MA::Flora::BatchPropertyInfo>"
constexpr ::System::IComparable_1<::MA::Flora::BatchPropertyInfo>* MA::Flora::BatchPropertyInfo::i___System__IComparable_1___MA__Flora__BatchPropertyInfo_()  {
return static_cast<::System::IComparable_1<::MA::Flora::BatchPropertyInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "NameID", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "TypeSizeInBytes", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "IsOverriden", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "IsPerInstance", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::BatchPropertyInfo::BatchPropertyInfo(int32_t  NameID, int32_t  TypeSizeInBytes, bool  IsOverriden, bool  IsPerInstance) noexcept  {
this->NameID = NameID;
this->TypeSizeInBytes = TypeSizeInBytes;
this->IsOverriden = IsOverriden;
this->IsPerInstance = IsPerInstance;
}
// Ctor Parameters []
constexpr ::MA::Flora::BatchPropertyInfo::BatchPropertyInfo()   {
}
