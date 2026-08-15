#pragma once
// IWYU pragma private; include "GlobalNamespace/DevGlobalPropertyHelper.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "GlobalNamespace/zzzz__DevGlobalPropertyHelper_def.hpp"
#include "GlobalNamespace/zzzz__DevGlobalPropertyHelper_def.hpp"
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::DevGlobalPropertyHelper_VectorProperty::DevGlobalPropertyHelper_VectorProperty(::StringW  name, ::UnityEngine::Vector4  value) noexcept  {
this->name = name;
this->value = value;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DevGlobalPropertyHelper_VectorProperty::DevGlobalPropertyHelper_VectorProperty()   {
}
//  Writing Method size for method: ::GlobalNamespace::DevGlobalPropertyHelper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DevGlobalPropertyHelper::*)()>(&::GlobalNamespace::DevGlobalPropertyHelper::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevGlobalPropertyHelper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::DevGlobalPropertyHelper_VectorProperty>& GlobalNamespace::DevGlobalPropertyHelper::__cordl_internal_get_vectorProperties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vectorProperties;
}
constexpr ::ArrayW<::GlobalNamespace::DevGlobalPropertyHelper_VectorProperty> const& GlobalNamespace::DevGlobalPropertyHelper::__cordl_internal_get_vectorProperties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vectorProperties;
}
constexpr void GlobalNamespace::DevGlobalPropertyHelper::__cordl_internal_set_vectorProperties(::ArrayW<::GlobalNamespace::DevGlobalPropertyHelper_VectorProperty>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vectorProperties = value;
}
inline void GlobalNamespace::DevGlobalPropertyHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevGlobalPropertyHelper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DevGlobalPropertyHelper* GlobalNamespace::DevGlobalPropertyHelper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DevGlobalPropertyHelper*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DevGlobalPropertyHelper::DevGlobalPropertyHelper()   {
}
