#pragma once
// IWYU pragma private; include "MA/Flora/TemplateKey.hpp"
#include "MA/Flora/zzzz__TemplateLayoutIndex_impl.hpp"
#include "MA/Flora/zzzz__TemplateKey_def.hpp"
#include "MA/Flora/zzzz__TemplateLayoutIndex_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::MA::Flora::TemplateKey._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateKey::*)(::MA::Flora::TemplateLayoutIndex)>(&::MA::Flora::TemplateKey::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateKey>(),
                        {".ctor", {}, {::i2c::type_of<::MA::Flora::TemplateLayoutIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateKey.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::TemplateKey::*)(::MA::Flora::TemplateKey)>(&::MA::Flora::TemplateKey::Equals)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a82e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateKey>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::TemplateKey>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateKey.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::TemplateKey::*)(::System::Object*)>(&::MA::Flora::TemplateKey::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814a9220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::TemplateKey>(),
                    {::i2c::class_of<::MA::Flora::TemplateKey>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateKey.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::TemplateKey::*)()>(&::MA::Flora::TemplateKey::GetHashCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::TemplateKey>(),
                    {::i2c::class_of<::MA::Flora::TemplateKey>(), 2}
                ));
    return ___internal_method;
  }
};
inline void MA::Flora::TemplateKey::_ctor(::MA::Flora::TemplateLayoutIndex  layout)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateKey>(),
                        {".ctor", {}, {::i2c::type_of<::MA::Flora::TemplateLayoutIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, layout);
}
inline bool MA::Flora::TemplateKey::Equals(::MA::Flora::TemplateKey  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateKey>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::TemplateKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool MA::Flora::TemplateKey::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::TemplateKey>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t MA::Flora::TemplateKey::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::TemplateKey>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::TemplateKey>"
constexpr  MA::Flora::TemplateKey::operator ::System::IEquatable_1<::MA::Flora::TemplateKey>*()  {
return static_cast<::System::IEquatable_1<::MA::Flora::TemplateKey>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::MA::Flora::TemplateKey>"
constexpr ::System::IEquatable_1<::MA::Flora::TemplateKey>* MA::Flora::TemplateKey::i___System__IEquatable_1___MA__Flora__TemplateKey_()  {
return static_cast<::System::IEquatable_1<::MA::Flora::TemplateKey>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Layout", ty: "::MA::Flora::TemplateLayoutIndex", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::TemplateKey::TemplateKey(::MA::Flora::TemplateLayoutIndex  Layout) noexcept  {
this->Layout = Layout;
}
// Ctor Parameters []
constexpr ::MA::Flora::TemplateKey::TemplateKey()   {
}
