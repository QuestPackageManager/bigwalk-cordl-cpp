#pragma once
// IWYU pragma private; include "MA/Flora/RendererGroupKey.hpp"
#include "MA/Flora/zzzz__RendererGroupKey_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::MA::Flora::RendererGroupKey.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::RendererGroupKey::*)(::MA::Flora::RendererGroupKey)>(&::MA::Flora::RendererGroupKey::Equals)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814a78e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::RendererGroupKey>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::RendererGroupKey>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::RendererGroupKey.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::RendererGroupKey::*)(::System::Object*)>(&::MA::Flora::RendererGroupKey::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1814a7930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::RendererGroupKey>(),
                    {::i2c::class_of<::MA::Flora::RendererGroupKey>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::RendererGroupKey.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::RendererGroupKey::*)()>(&::MA::Flora::RendererGroupKey::GetHashCode)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814a79c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::RendererGroupKey>(),
                    {::i2c::class_of<::MA::Flora::RendererGroupKey>(), 2}
                ));
    return ___internal_method;
  }
};
inline bool MA::Flora::RendererGroupKey::Equals(::MA::Flora::RendererGroupKey  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::RendererGroupKey>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::RendererGroupKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool MA::Flora::RendererGroupKey::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::RendererGroupKey>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t MA::Flora::RendererGroupKey::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::RendererGroupKey>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::RendererGroupKey>"
constexpr  MA::Flora::RendererGroupKey::operator ::System::IEquatable_1<::MA::Flora::RendererGroupKey>*()  {
return static_cast<::System::IEquatable_1<::MA::Flora::RendererGroupKey>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::MA::Flora::RendererGroupKey>"
constexpr ::System::IEquatable_1<::MA::Flora::RendererGroupKey>* MA::Flora::RendererGroupKey::i___System__IEquatable_1___MA__Flora__RendererGroupKey_()  {
return static_cast<::System::IEquatable_1<::MA::Flora::RendererGroupKey>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "StateSignature", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "StateCount", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "LodIndex", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::RendererGroupKey::RendererGroupKey(uint64_t  StateSignature, uint16_t  StateCount, uint8_t  LodIndex) noexcept  {
this->StateSignature = StateSignature;
this->StateCount = StateCount;
this->LodIndex = LodIndex;
}
// Ctor Parameters []
constexpr ::MA::Flora::RendererGroupKey::RendererGroupKey()   {
}
