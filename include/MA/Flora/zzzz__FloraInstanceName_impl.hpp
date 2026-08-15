#pragma once
// IWYU pragma private; include "MA/Flora/FloraInstanceName.hpp"
#include "MA/Flora/zzzz__FloraInstanceName_def.hpp"
#include "Unity/Collections/zzzz__FixedString64Bytes_def.hpp"
//  Writing Method size for method: ::MA::Flora::FloraInstanceName.ToFixedString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraInstanceName::*)(::by_ref<::Unity::Collections::FixedString64Bytes>)>(&::MA::Flora::FloraInstanceName::ToFixedString)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18147cd70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceName>(),
                        {"ToFixedString", {}, {::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceName.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::MA::Flora::FloraInstanceName::*)()>(&::MA::Flora::FloraInstanceName::ToString)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18147ce20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraInstanceName>(),
                    {::i2c::class_of<::MA::Flora::FloraInstanceName>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraInstanceName.SetFixedString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraInstanceName::*)(::by_ref<::Unity::Collections::FixedString64Bytes>)>(&::MA::Flora::FloraInstanceName::SetFixedString)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18147cc60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceName>(),
                        {"SetFixedString", {}, {::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::FloraInstanceName::ToFixedString(::by_ref<::Unity::Collections::FixedString64Bytes>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceName>(),
                        {"ToFixedString", {}, {::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW MA::Flora::FloraInstanceName::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraInstanceName>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void MA::Flora::FloraInstanceName::SetFixedString(::by_ref<::Unity::Collections::FixedString64Bytes>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraInstanceName>(),
                        {"SetFixedString", {}, {::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::FloraInstanceName::FloraInstanceName(int32_t  Index) noexcept  {
this->Index = Index;
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraInstanceName::FloraInstanceName()   {
}
