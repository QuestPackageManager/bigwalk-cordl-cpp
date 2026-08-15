#pragma once
// IWYU pragma private; include "UnityEngine/DisplayInfo.hpp"
#include "UnityEngine/zzzz__RectInt_impl.hpp"
#include "UnityEngine/zzzz__RefreshRate_impl.hpp"
#include "UnityEngine/zzzz__DisplayInfo_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::DisplayInfo.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::DisplayInfo::*)(::UnityEngine::DisplayInfo)>(&::UnityEngine::DisplayInfo::Equals)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18224ce30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::DisplayInfo>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::DisplayInfo>()}}
                    )));
    return ___internal_method;
  }
};
inline bool UnityEngine::DisplayInfo::Equals(::UnityEngine::DisplayInfo  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::DisplayInfo>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::DisplayInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::DisplayInfo>"
constexpr  UnityEngine::DisplayInfo::operator ::System::IEquatable_1<::UnityEngine::DisplayInfo>*()  {
return static_cast<::System::IEquatable_1<::UnityEngine::DisplayInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::DisplayInfo>"
constexpr ::System::IEquatable_1<::UnityEngine::DisplayInfo>* UnityEngine::DisplayInfo::i___System__IEquatable_1___UnityEngine__DisplayInfo_()  {
return static_cast<::System::IEquatable_1<::UnityEngine::DisplayInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "handle", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "refreshRate", ty: "::UnityEngine::RefreshRate", modifiers: "", def_value: Some("{}") }, CppParam { name: "workArea", ty: "::UnityEngine::RectInt", modifiers: "", def_value: Some("{}") }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "physicalDpi", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::DisplayInfo::DisplayInfo(uint64_t  handle, int32_t  width, int32_t  height, ::UnityEngine::RefreshRate  refreshRate, ::UnityEngine::RectInt  workArea, ::StringW  name, float_t  physicalDpi) noexcept  {
this->handle = handle;
this->width = width;
this->height = height;
this->refreshRate = refreshRate;
this->workArea = workArea;
this->name = name;
this->physicalDpi = physicalDpi;
}
// Ctor Parameters []
constexpr ::UnityEngine::DisplayInfo::DisplayInfo()   {
}
