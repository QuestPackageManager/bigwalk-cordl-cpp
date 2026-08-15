#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEElementPropertyData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TheVisualEngine/zzzz__TVEPropertyType_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "TheVisualEngine/zzzz__TVEElementPropertyData_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::TheVisualEngine::TVEElementPropertyData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEElementPropertyData::*)()>(&::TheVisualEngine::TVEElementPropertyData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEElementPropertyData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::TheVisualEngine::TVEPropertyType& TheVisualEngine::TVEElementPropertyData::__cordl_internal_get_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr ::TheVisualEngine::TVEPropertyType const& TheVisualEngine::TVEElementPropertyData::__cordl_internal_get_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr void TheVisualEngine::TVEElementPropertyData::__cordl_internal_set_type(::TheVisualEngine::TVEPropertyType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___type = value;
}
constexpr ::StringW& TheVisualEngine::TVEElementPropertyData::__cordl_internal_get_prop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prop;
}
constexpr ::StringW const& TheVisualEngine::TVEElementPropertyData::__cordl_internal_get_prop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prop;
}
constexpr void TheVisualEngine::TVEElementPropertyData::__cordl_internal_set_prop(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prop = value;
}
constexpr ::UnityW<::UnityEngine::Texture>& TheVisualEngine::TVEElementPropertyData::__cordl_internal_get_texture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texture;
}
constexpr ::UnityW<::UnityEngine::Texture> const& TheVisualEngine::TVEElementPropertyData::__cordl_internal_get_texture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texture;
}
constexpr void TheVisualEngine::TVEElementPropertyData::__cordl_internal_set_texture(::UnityW<::UnityEngine::Texture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___texture = value;
}
constexpr ::UnityEngine::Vector4& TheVisualEngine::TVEElementPropertyData::__cordl_internal_get_vector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vector;
}
constexpr ::UnityEngine::Vector4 const& TheVisualEngine::TVEElementPropertyData::__cordl_internal_get_vector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vector;
}
constexpr void TheVisualEngine::TVEElementPropertyData::__cordl_internal_set_vector(::UnityEngine::Vector4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vector = value;
}
constexpr float_t& TheVisualEngine::TVEElementPropertyData::__cordl_internal_get_value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr float_t const& TheVisualEngine::TVEElementPropertyData::__cordl_internal_get_value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr void TheVisualEngine::TVEElementPropertyData::__cordl_internal_set_value(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___value = value;
}
inline void TheVisualEngine::TVEElementPropertyData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEElementPropertyData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::TheVisualEngine::TVEElementPropertyData* TheVisualEngine::TVEElementPropertyData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TheVisualEngine::TVEElementPropertyData*>());
}
// Ctor Parameters []
constexpr ::TheVisualEngine::TVEElementPropertyData::TVEElementPropertyData()   {
}
