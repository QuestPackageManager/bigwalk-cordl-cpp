#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEElementMaterialData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TheVisualEngine/zzzz__TVEElementMaterialData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TheVisualEngine/zzzz__TVEElementPropertyData_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
//  Writing Method size for method: ::TheVisualEngine::TVEElementMaterialData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEElementMaterialData::*)()>(&::TheVisualEngine::TVEElementMaterialData::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804b9240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEElementMaterialData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Shader>& TheVisualEngine::TVEElementMaterialData::__cordl_internal_get_shader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& TheVisualEngine::TVEElementMaterialData::__cordl_internal_get_shader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shader;
}
constexpr void TheVisualEngine::TVEElementMaterialData::__cordl_internal_set_shader(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shader = value;
}
constexpr ::StringW& TheVisualEngine::TVEElementMaterialData::__cordl_internal_get_shaderName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shaderName;
}
constexpr ::StringW const& TheVisualEngine::TVEElementMaterialData::__cordl_internal_get_shaderName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shaderName;
}
constexpr void TheVisualEngine::TVEElementMaterialData::__cordl_internal_set_shaderName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shaderName = value;
}
constexpr ::System::Collections::Generic::List_1<::TheVisualEngine::TVEElementPropertyData*>*& TheVisualEngine::TVEElementMaterialData::__cordl_internal_get_props()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___props;
}
constexpr ::System::Collections::Generic::List_1<::TheVisualEngine::TVEElementPropertyData*>* const& TheVisualEngine::TVEElementMaterialData::__cordl_internal_get_props() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___props;
}
constexpr void TheVisualEngine::TVEElementMaterialData::__cordl_internal_set_props(::System::Collections::Generic::List_1<::TheVisualEngine::TVEElementPropertyData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___props = value;
}
inline void TheVisualEngine::TVEElementMaterialData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEElementMaterialData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::TheVisualEngine::TVEElementMaterialData* TheVisualEngine::TVEElementMaterialData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TheVisualEngine::TVEElementMaterialData*>());
}
// Ctor Parameters []
constexpr ::TheVisualEngine::TVEElementMaterialData::TVEElementMaterialData()   {
}
