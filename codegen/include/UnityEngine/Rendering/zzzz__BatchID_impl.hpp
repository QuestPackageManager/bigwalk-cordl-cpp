#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BatchID.hpp"
#include "UnityEngine/Rendering/zzzz__BatchID_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::BatchID.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::BatchID::*)()>(&::UnityEngine::Rendering::BatchID::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a8300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::BatchID>(),
                    {::i2c::class_of<::UnityEngine::Rendering::BatchID>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchID.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::BatchID::*)(::System::Object*)>(&::UnityEngine::Rendering::BatchID::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18228ddd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::BatchID>(),
                    {::i2c::class_of<::UnityEngine::Rendering::BatchID>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchID.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::BatchID::*)(::UnityEngine::Rendering::BatchID)>(&::UnityEngine::Rendering::BatchID::Equals)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a82e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::BatchID>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Rendering::BatchID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchID.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::BatchID, ::UnityEngine::Rendering::BatchID)>(&::UnityEngine::Rendering::BatchID::op_Equality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805a8340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::BatchID>(),
                        {"op_Equality", {}, {::i2c::type_of<::UnityEngine::Rendering::BatchID>(), ::i2c::type_of<::UnityEngine::Rendering::BatchID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchID.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::BatchID, ::UnityEngine::Rendering::BatchID)>(&::UnityEngine::Rendering::BatchID::op_Inequality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805a8350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::BatchID>(),
                        {"op_Inequality", {}, {::i2c::type_of<::UnityEngine::Rendering::BatchID>(), ::i2c::type_of<::UnityEngine::Rendering::BatchID>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::BatchID::setStaticF_Null(::UnityEngine::Rendering::BatchID  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::BatchID, "Null", ::UnityEngine::Rendering::BatchID>(std::forward<::UnityEngine::Rendering::BatchID>(value));
}
inline ::UnityEngine::Rendering::BatchID UnityEngine::Rendering::BatchID::getStaticF_Null()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::BatchID, "Null", ::UnityEngine::Rendering::BatchID>();
}
inline int32_t UnityEngine::Rendering::BatchID::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::BatchID>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::BatchID::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::BatchID>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool UnityEngine::Rendering::BatchID::Equals(::UnityEngine::Rendering::BatchID  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::BatchID>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Rendering::BatchID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::Rendering::BatchID::op_Equality(::UnityEngine::Rendering::BatchID  a, ::UnityEngine::Rendering::BatchID  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::BatchID>(),
                        {"op_Equality", {}, {::i2c::type_of<::UnityEngine::Rendering::BatchID>(), ::i2c::type_of<::UnityEngine::Rendering::BatchID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool UnityEngine::Rendering::BatchID::op_Inequality(::UnityEngine::Rendering::BatchID  a, ::UnityEngine::Rendering::BatchID  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::BatchID>(),
                        {"op_Inequality", {}, {::i2c::type_of<::UnityEngine::Rendering::BatchID>(), ::i2c::type_of<::UnityEngine::Rendering::BatchID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::BatchID>"
constexpr  UnityEngine::Rendering::BatchID::operator ::System::IEquatable_1<::UnityEngine::Rendering::BatchID>*()  {
return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::BatchID>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::BatchID>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::BatchID>* UnityEngine::Rendering::BatchID::i___System__IEquatable_1___UnityEngine__Rendering__BatchID_()  {
return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::BatchID>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "value", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::BatchID::BatchID(uint32_t  value) noexcept  {
this->value = value;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BatchID::BatchID()   {
}
