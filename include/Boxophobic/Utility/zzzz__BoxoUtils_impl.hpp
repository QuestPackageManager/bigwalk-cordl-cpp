#pragma once
// IWYU pragma private; include "Boxophobic/Utility/BoxoUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Boxophobic/Utility/zzzz__BoxoUtils_def.hpp"
#include "Boxophobic/Utility/zzzz__BoxoUtils_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Boxophobic::Utility::BoxoUtils_BoxoGlobals._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Boxophobic::Utility::BoxoUtils_BoxoGlobals::*)()>(&::Boxophobic::Utility::BoxoUtils_BoxoGlobals::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils_BoxoGlobals*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Boxophobic::Utility::BoxoUtils_BoxoGlobals::setStaticF_userFolder(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "userFolder", ::Boxophobic::Utility::BoxoUtils_BoxoGlobals*>(std::forward<::StringW>(value));
}
inline ::StringW Boxophobic::Utility::BoxoUtils_BoxoGlobals::getStaticF_userFolder()  {
return ::cordl_internals::getStaticField<::StringW, "userFolder", ::Boxophobic::Utility::BoxoUtils_BoxoGlobals*>();
}
inline void Boxophobic::Utility::BoxoUtils_BoxoGlobals::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils_BoxoGlobals*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Boxophobic::Utility::BoxoUtils_BoxoGlobals* Boxophobic::Utility::BoxoUtils_BoxoGlobals::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Boxophobic::Utility::BoxoUtils_BoxoGlobals*>());
}
// Ctor Parameters []
constexpr ::Boxophobic::Utility::BoxoUtils_BoxoGlobals::BoxoUtils_BoxoGlobals()   {
}
//  Writing Method size for method: ::Boxophobic::Utility::BoxoUtils_ProjectData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Boxophobic::Utility::BoxoUtils_ProjectData::*)()>(&::Boxophobic::Utility::BoxoUtils_ProjectData::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804bc960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils_ProjectData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Boxophobic::Utility::BoxoUtils_ProjectData::__cordl_internal_get_pipeline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pipeline;
}
constexpr ::StringW const& Boxophobic::Utility::BoxoUtils_ProjectData::__cordl_internal_get_pipeline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pipeline;
}
constexpr void Boxophobic::Utility::BoxoUtils_ProjectData::__cordl_internal_set_pipeline(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pipeline = value;
}
constexpr ::StringW& Boxophobic::Utility::BoxoUtils_ProjectData::__cordl_internal_get_minimum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minimum;
}
constexpr ::StringW const& Boxophobic::Utility::BoxoUtils_ProjectData::__cordl_internal_get_minimum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minimum;
}
constexpr void Boxophobic::Utility::BoxoUtils_ProjectData::__cordl_internal_set_minimum(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minimum = value;
}
constexpr ::StringW& Boxophobic::Utility::BoxoUtils_ProjectData::__cordl_internal_get_package()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___package;
}
constexpr ::StringW const& Boxophobic::Utility::BoxoUtils_ProjectData::__cordl_internal_get_package() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___package;
}
constexpr void Boxophobic::Utility::BoxoUtils_ProjectData::__cordl_internal_set_package(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___package = value;
}
constexpr bool& Boxophobic::Utility::BoxoUtils_ProjectData::__cordl_internal_get_isSupported()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSupported;
}
constexpr bool const& Boxophobic::Utility::BoxoUtils_ProjectData::__cordl_internal_get_isSupported() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSupported;
}
constexpr void Boxophobic::Utility::BoxoUtils_ProjectData::__cordl_internal_set_isSupported(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isSupported = value;
}
constexpr bool& Boxophobic::Utility::BoxoUtils_ProjectData::__cordl_internal_get_isTechRelease()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isTechRelease;
}
constexpr bool const& Boxophobic::Utility::BoxoUtils_ProjectData::__cordl_internal_get_isTechRelease() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isTechRelease;
}
constexpr void Boxophobic::Utility::BoxoUtils_ProjectData::__cordl_internal_set_isTechRelease(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isTechRelease = value;
}
constexpr bool& Boxophobic::Utility::BoxoUtils_ProjectData::__cordl_internal_get_isAlphaOrBetaRelease()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isAlphaOrBetaRelease;
}
constexpr bool const& Boxophobic::Utility::BoxoUtils_ProjectData::__cordl_internal_get_isAlphaOrBetaRelease() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isAlphaOrBetaRelease;
}
constexpr void Boxophobic::Utility::BoxoUtils_ProjectData::__cordl_internal_set_isAlphaOrBetaRelease(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isAlphaOrBetaRelease = value;
}
inline void Boxophobic::Utility::BoxoUtils_ProjectData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils_ProjectData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Boxophobic::Utility::BoxoUtils_ProjectData* Boxophobic::Utility::BoxoUtils_ProjectData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Boxophobic::Utility::BoxoUtils_ProjectData*>());
}
// Ctor Parameters []
constexpr ::Boxophobic::Utility::BoxoUtils_ProjectData::BoxoUtils_ProjectData()   {
}
//  Writing Method size for method: ::Boxophobic::Utility::BoxoUtils.GetProjectData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Boxophobic::Utility::BoxoUtils_ProjectData* (*)()>(&::Boxophobic::Utility::BoxoUtils::GetProjectData)> {
  constexpr static std::size_t size = 0x730;
  constexpr static std::size_t addrs = 0x1804ba410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"GetProjectData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::Utility::BoxoUtils.GetProjectPipeline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Boxophobic::Utility::BoxoUtils::GetProjectPipeline)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1804bab40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"GetProjectPipeline", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::Utility::BoxoUtils.SetMaterialBool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*, ::StringW, ::StringW)>(&::Boxophobic::Utility::BoxoUtils::SetMaterialBool)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804baf80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"SetMaterialBool", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::Utility::BoxoUtils.SetMaterialInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*, ::StringW, ::StringW)>(&::Boxophobic::Utility::BoxoUtils::SetMaterialInt)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804bb270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"SetMaterialInt", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::Utility::BoxoUtils.SetMaterialFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*, ::StringW, ::StringW)>(&::Boxophobic::Utility::BoxoUtils::SetMaterialFloat)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804bb210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"SetMaterialFloat", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::Utility::BoxoUtils.SetMaterialVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*, ::StringW, ::StringW)>(&::Boxophobic::Utility::BoxoUtils::SetMaterialVector)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804bc020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"SetMaterialVector", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::Utility::BoxoUtils.SetMaterialTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*, ::StringW, ::StringW)>(&::Boxophobic::Utility::BoxoUtils::SetMaterialTexture)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804bbfc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"SetMaterialTexture", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::Utility::BoxoUtils.SetMaterialCoords
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*, ::StringW, ::StringW, ::StringW)>(&::Boxophobic::Utility::BoxoUtils::SetMaterialCoords)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1804bb110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"SetMaterialCoords", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::Utility::BoxoUtils.SetMaterialBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*, ::StringW, ::StringW, ::StringW)>(&::Boxophobic::Utility::BoxoUtils::SetMaterialBounds)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804baff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"SetMaterialBounds", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::Utility::BoxoUtils.SetMaterialOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*, ::StringW, ::StringW)>(&::Boxophobic::Utility::BoxoUtils::SetMaterialOptions)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1804bbc40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"SetMaterialOptions", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::Utility::BoxoUtils.SetMaterialOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*, ::StringW, ::StringW, ::StringW)>(&::Boxophobic::Utility::BoxoUtils::SetMaterialOptions)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1804bbce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"SetMaterialOptions", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::Utility::BoxoUtils.SetMaterialBackface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*, ::StringW, ::StringW)>(&::Boxophobic::Utility::BoxoUtils::SetMaterialBackface)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1804baef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"SetMaterialBackface", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::Utility::BoxoUtils.SetMaterialBackfaceLegacy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*, ::StringW, ::StringW)>(&::Boxophobic::Utility::BoxoUtils::SetMaterialBackfaceLegacy)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1804bae60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"SetMaterialBackfaceLegacy", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::Utility::BoxoUtils.SetMaterialReciprocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*, ::StringW)>(&::Boxophobic::Utility::BoxoUtils::SetMaterialReciprocal)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1804bbe90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"SetMaterialReciprocal", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::Utility::BoxoUtils.SetMaterialKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*, ::StringW, bool)>(&::Boxophobic::Utility::BoxoUtils::SetMaterialKeyword)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804bb660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"SetMaterialKeyword", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::Utility::BoxoUtils.SetMaterialKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*, ::StringW, ::StringW)>(&::Boxophobic::Utility::BoxoUtils::SetMaterialKeyword)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1804bb6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"SetMaterialKeyword", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::Utility::BoxoUtils.SetMaterialKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*, ::StringW, ::ArrayW<::StringW>)>(&::Boxophobic::Utility::BoxoUtils::SetMaterialKeyword)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804bb7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"SetMaterialKeyword", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::Utility::BoxoUtils.SetMaterialKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*, ::StringW, ::StringW, ::StringW)>(&::Boxophobic::Utility::BoxoUtils::SetMaterialKeyword)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804bb730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"SetMaterialKeyword", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::Utility::BoxoUtils.SetMaterialKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*, ::StringW, ::StringW, ::ArrayW<::StringW>)>(&::Boxophobic::Utility::BoxoUtils::SetMaterialKeyword)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804bb3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"SetMaterialKeyword", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::Utility::BoxoUtils.SetMaterialKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*, bool, ::ArrayW<::StringW>, ::StringW, ::StringW)>(&::Boxophobic::Utility::BoxoUtils::SetMaterialKeyword)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1804bbaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"SetMaterialKeyword", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::Utility::BoxoUtils.SetMaterialKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*, bool, ::ArrayW<::StringW>, ::StringW, ::ArrayW<::StringW>)>(&::Boxophobic::Utility::BoxoUtils::SetMaterialKeyword)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1804bb8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"SetMaterialKeyword", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::Utility::BoxoUtils.SetMaterialKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*, bool, ::ArrayW<::StringW>, ::StringW)>(&::Boxophobic::Utility::BoxoUtils::SetMaterialKeyword)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1804bb510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"SetMaterialKeyword", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::Utility::BoxoUtils.SetMaterialKeywordInverted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*, ::StringW, ::StringW)>(&::Boxophobic::Utility::BoxoUtils::SetMaterialKeywordInverted)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1804bb360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"SetMaterialKeywordInverted", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::Utility::BoxoUtils.SetMaterialKeywordByTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*, ::StringW, ::StringW)>(&::Boxophobic::Utility::BoxoUtils::SetMaterialKeywordByTexture)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1804bb2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"SetMaterialKeywordByTexture", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::Utility::BoxoUtils.SetMaterialTextureSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*, ::StringW, ::StringW)>(&::Boxophobic::Utility::BoxoUtils::SetMaterialTextureSpace)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1804bbf20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"SetMaterialTextureSpace", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::Utility::BoxoUtils.GetMaterialFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Material*, ::StringW, float_t)>(&::Boxophobic::Utility::BoxoUtils::GetMaterialFloat)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804ba240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"GetMaterialFloat", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::Utility::BoxoUtils.GetMaterialFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Material*, ::StringW)>(&::Boxophobic::Utility::BoxoUtils::GetMaterialFloat)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804ba2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"GetMaterialFloat", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::Utility::BoxoUtils.GetMaterialInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Material*, ::StringW, int32_t)>(&::Boxophobic::Utility::BoxoUtils::GetMaterialInt)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804ba350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"GetMaterialInt", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::Utility::BoxoUtils.GetMaterialInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Material*, ::StringW)>(&::Boxophobic::Utility::BoxoUtils::GetMaterialInt)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1804ba300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"GetMaterialInt", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::Utility::BoxoUtils.GetMaterialTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture> (*)(::UnityEngine::Material*, ::StringW)>(&::Boxophobic::Utility::BoxoUtils::GetMaterialTexture)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804ba3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"GetMaterialTexture", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::Utility::BoxoUtils.IsMaterialTextureUsed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Material*, ::StringW)>(&::Boxophobic::Utility::BoxoUtils::IsMaterialTextureUsed)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804bad00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"IsMaterialTextureUsed", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::Utility::BoxoUtils.MathRemap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t, float_t, float_t)>(&::Boxophobic::Utility::BoxoUtils::MathRemap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804bade0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"MathRemap", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::Utility::BoxoUtils.MathRemap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Boxophobic::Utility::BoxoUtils::MathRemap)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804badd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"MathRemap", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::Utility::BoxoUtils.MathVector2ToFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::Boxophobic::Utility::BoxoUtils::MathVector2ToFloat)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804bae00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"MathVector2ToFloat", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::Utility::BoxoUtils.MathFloatFromVector2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(float_t)>(&::Boxophobic::Utility::BoxoUtils::MathFloatFromVector2)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804bad70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"MathFloatFromVector2", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::Utility::BoxoUtils.FormatMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Boxophobic::Utility::BoxoUtils::FormatMessage)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x1804b9d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"FormatMessage", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::Utility::BoxoUtils.FormatMessageReverse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Boxophobic::Utility::BoxoUtils::FormatMessageReverse)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x1804b9a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"FormatMessageReverse", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::Utility::BoxoUtils.DestryObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Object*)>(&::Boxophobic::Utility::BoxoUtils::DestryObject)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804b9a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"DestryObject", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::Utility::BoxoUtils.DisableServerExecution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Boxophobic::Utility::BoxoUtils::DisableServerExecution)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804b9a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"DisableServerExecution", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Boxophobic::Utility::BoxoUtils_ProjectData* Boxophobic::Utility::BoxoUtils::GetProjectData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"GetProjectData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Boxophobic::Utility::BoxoUtils_ProjectData*>(nullptr, ___internal_method);
}
inline ::StringW Boxophobic::Utility::BoxoUtils::GetProjectPipeline()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"GetProjectPipeline", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void Boxophobic::Utility::BoxoUtils::SetMaterialBool(::UnityEngine::Material*  material, ::StringW  valueProp, ::StringW  internalProp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"SetMaterialBool", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, material, valueProp, internalProp);
}
inline void Boxophobic::Utility::BoxoUtils::SetMaterialInt(::UnityEngine::Material*  material, ::StringW  valueProp, ::StringW  internalProp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"SetMaterialInt", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, material, valueProp, internalProp);
}
inline void Boxophobic::Utility::BoxoUtils::SetMaterialFloat(::UnityEngine::Material*  material, ::StringW  valueProp, ::StringW  internalProp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"SetMaterialFloat", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, material, valueProp, internalProp);
}
inline void Boxophobic::Utility::BoxoUtils::SetMaterialVector(::UnityEngine::Material*  material, ::StringW  valueProp, ::StringW  internalProp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"SetMaterialVector", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, material, valueProp, internalProp);
}
inline void Boxophobic::Utility::BoxoUtils::SetMaterialTexture(::UnityEngine::Material*  material, ::StringW  valueProp, ::StringW  internalProp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"SetMaterialTexture", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, material, valueProp, internalProp);
}
inline void Boxophobic::Utility::BoxoUtils::SetMaterialCoords(::UnityEngine::Material*  material, ::StringW  modeProp, ::StringW  valueProp, ::StringW  internalProp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"SetMaterialCoords", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, material, modeProp, valueProp, internalProp);
}
inline void Boxophobic::Utility::BoxoUtils::SetMaterialBounds(::UnityEngine::Material*  material, ::StringW  modeProp, ::StringW  valueProp, ::StringW  internalProp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"SetMaterialBounds", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, material, modeProp, valueProp, internalProp);
}
inline void Boxophobic::Utility::BoxoUtils::SetMaterialOptions(::UnityEngine::Material*  material, ::StringW  modeProp, ::StringW  valueProp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"SetMaterialOptions", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, material, modeProp, valueProp);
}
inline void Boxophobic::Utility::BoxoUtils::SetMaterialOptions(::UnityEngine::Material*  material, ::StringW  modeProp, ::StringW  valuePropA, ::StringW  valuePropB)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"SetMaterialOptions", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, material, modeProp, valuePropA, valuePropB);
}
inline void Boxophobic::Utility::BoxoUtils::SetMaterialBackface(::UnityEngine::Material*  material, ::StringW  modeProp, ::StringW  valueProp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"SetMaterialBackface", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, material, modeProp, valueProp);
}
inline void Boxophobic::Utility::BoxoUtils::SetMaterialBackfaceLegacy(::UnityEngine::Material*  material, ::StringW  modeProp, ::StringW  valueProp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"SetMaterialBackfaceLegacy", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, material, modeProp, valueProp);
}
inline void Boxophobic::Utility::BoxoUtils::SetMaterialReciprocal(::UnityEngine::Material*  material, ::StringW  valueProp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"SetMaterialReciprocal", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, material, valueProp);
}
inline void Boxophobic::Utility::BoxoUtils::SetMaterialKeyword(::UnityEngine::Material*  material, ::StringW  keyword, bool  enable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"SetMaterialKeyword", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, material, keyword, enable);
}
inline void Boxophobic::Utility::BoxoUtils::SetMaterialKeyword(::UnityEngine::Material*  material, ::StringW  property, ::StringW  keyword)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"SetMaterialKeyword", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, material, property, keyword);
}
inline void Boxophobic::Utility::BoxoUtils::SetMaterialKeyword(::UnityEngine::Material*  material, ::StringW  property, ::ArrayW<::StringW>  keywords)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"SetMaterialKeyword", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, material, property, keywords);
}
inline void Boxophobic::Utility::BoxoUtils::SetMaterialKeyword(::UnityEngine::Material*  material, ::StringW  parent, ::StringW  property, ::StringW  keyword)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"SetMaterialKeyword", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, material, parent, property, keyword);
}
inline void Boxophobic::Utility::BoxoUtils::SetMaterialKeyword(::UnityEngine::Material*  material, ::StringW  parent, ::StringW  property, ::ArrayW<::StringW>  keywords)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"SetMaterialKeyword", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, material, parent, property, keywords);
}
inline void Boxophobic::Utility::BoxoUtils::SetMaterialKeyword(::UnityEngine::Material*  material, bool  allParentsOn, ::ArrayW<::StringW>  parents, ::StringW  property, ::StringW  keyword)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"SetMaterialKeyword", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, material, allParentsOn, parents, property, keyword);
}
inline void Boxophobic::Utility::BoxoUtils::SetMaterialKeyword(::UnityEngine::Material*  material, bool  allParentsOn, ::ArrayW<::StringW>  parents, ::StringW  property, ::ArrayW<::StringW>  keywords)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"SetMaterialKeyword", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, material, allParentsOn, parents, property, keywords);
}
inline void Boxophobic::Utility::BoxoUtils::SetMaterialKeyword(::UnityEngine::Material*  material, bool  allParentsOn, ::ArrayW<::StringW>  properties, ::StringW  keyword)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"SetMaterialKeyword", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, material, allParentsOn, properties, keyword);
}
inline void Boxophobic::Utility::BoxoUtils::SetMaterialKeywordInverted(::UnityEngine::Material*  material, ::StringW  property, ::StringW  keyword)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"SetMaterialKeywordInverted", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, material, property, keyword);
}
inline void Boxophobic::Utility::BoxoUtils::SetMaterialKeywordByTexture(::UnityEngine::Material*  material, ::StringW  property, ::StringW  keyword)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"SetMaterialKeywordByTexture", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, material, property, keyword);
}
inline void Boxophobic::Utility::BoxoUtils::SetMaterialTextureSpace(::UnityEngine::Material*  material, ::StringW  texProp, ::StringW  spaceProp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"SetMaterialTextureSpace", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, material, texProp, spaceProp);
}
inline float_t Boxophobic::Utility::BoxoUtils::GetMaterialFloat(::UnityEngine::Material*  material, ::StringW  property, float_t  defaultValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"GetMaterialFloat", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, material, property, defaultValue);
}
inline float_t Boxophobic::Utility::BoxoUtils::GetMaterialFloat(::UnityEngine::Material*  material, ::StringW  property)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"GetMaterialFloat", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, material, property);
}
inline int32_t Boxophobic::Utility::BoxoUtils::GetMaterialInt(::UnityEngine::Material*  material, ::StringW  property, int32_t  defaultValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"GetMaterialInt", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, material, property, defaultValue);
}
inline int32_t Boxophobic::Utility::BoxoUtils::GetMaterialInt(::UnityEngine::Material*  material, ::StringW  property)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"GetMaterialInt", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, material, property);
}
inline ::UnityW<::UnityEngine::Texture> Boxophobic::Utility::BoxoUtils::GetMaterialTexture(::UnityEngine::Material*  material, ::StringW  property)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"GetMaterialTexture", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>>(nullptr, ___internal_method, material, property);
}
inline bool Boxophobic::Utility::BoxoUtils::IsMaterialTextureUsed(::UnityEngine::Material*  material, ::StringW  property)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"IsMaterialTextureUsed", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, material, property);
}
inline float_t Boxophobic::Utility::BoxoUtils::MathRemap(float_t  value, float_t  minOld, float_t  maxOld, float_t  minNew, float_t  maxNew)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"MathRemap", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value, minOld, maxOld, minNew, maxNew);
}
inline float_t Boxophobic::Utility::BoxoUtils::MathRemap(float_t  value, float_t  minOld, float_t  maxOld)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"MathRemap", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value, minOld, maxOld);
}
inline float_t Boxophobic::Utility::BoxoUtils::MathVector2ToFloat(float_t  x, float_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"MathVector2ToFloat", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, x, y);
}
inline ::UnityEngine::Vector2 Boxophobic::Utility::BoxoUtils::MathFloatFromVector2(float_t  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"MathFloatFromVector2", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, input);
}
inline ::StringW Boxophobic::Utility::BoxoUtils::FormatMessage(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"FormatMessage", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, message);
}
inline ::StringW Boxophobic::Utility::BoxoUtils::FormatMessageReverse(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"FormatMessageReverse", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, message);
}
inline void Boxophobic::Utility::BoxoUtils::DestryObject(::UnityEngine::Object*  objectToDestory)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"DestryObject", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, objectToDestory);
}
inline bool Boxophobic::Utility::BoxoUtils::DisableServerExecution()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::BoxoUtils*>(),
                        {"DisableServerExecution", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Boxophobic::Utility::BoxoUtils::BoxoUtils()   {
}
