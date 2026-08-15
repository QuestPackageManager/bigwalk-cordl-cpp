#pragma once
// IWYU pragma private; include "MA/Flora/CompressedTransform.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "Unity/Mathematics/zzzz__half3_impl.hpp"
#include "Unity/Mathematics/zzzz__half4_impl.hpp"
#include "MA/Flora/zzzz__CompressedTransform_def.hpp"
#include "MA/Flora/zzzz__FloraInstanceTransform_def.hpp"
//  Writing Method size for method: ::MA::Flora::CompressedTransform.op_Implicit___MA__Flora__CompressedTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::CompressedTransform (*)(::MA::Flora::FloraInstanceTransform)>(&::MA::Flora::CompressedTransform::op_Implicit___MA__Flora__CompressedTransform)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18150aae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CompressedTransform>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::Flora::FloraInstanceTransform>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CompressedTransform.op_Implicit___MA__Flora__FloraInstanceTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraInstanceTransform (*)(::MA::Flora::CompressedTransform)>(&::MA::Flora::CompressedTransform::op_Implicit___MA__Flora__FloraInstanceTransform)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18150ab80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CompressedTransform>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::Flora::CompressedTransform>()}}
                    )));
    return ___internal_method;
  }
};
inline ::MA::Flora::CompressedTransform MA::Flora::CompressedTransform::op_Implicit___MA__Flora__CompressedTransform(::MA::Flora::FloraInstanceTransform  instanceTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CompressedTransform>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::Flora::FloraInstanceTransform>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::CompressedTransform>(nullptr, ___internal_method, instanceTransform);
}
inline ::MA::Flora::FloraInstanceTransform MA::Flora::CompressedTransform::op_Implicit___MA__Flora__FloraInstanceTransform(::MA::Flora::CompressedTransform  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CompressedTransform>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::Flora::CompressedTransform>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraInstanceTransform>(nullptr, ___internal_method, transform);
}
// Ctor Parameters [CppParam { name: "Position", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}") }, CppParam { name: "Rotation", ty: "::Unity::Mathematics::half4", modifiers: "", def_value: Some("{}") }, CppParam { name: "Scale", ty: "::Unity::Mathematics::half3", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::CompressedTransform::CompressedTransform(::Unity::Mathematics::float3  Position, ::Unity::Mathematics::half4  Rotation, ::Unity::Mathematics::half3  Scale) noexcept  {
this->Position = Position;
this->Rotation = Rotation;
this->Scale = Scale;
}
// Ctor Parameters []
constexpr ::MA::Flora::CompressedTransform::CompressedTransform()   {
}
