#pragma once
// IWYU pragma private; include "GlobalNamespace/TerrainAligner.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__TerrainAligner_def.hpp"
#include "GlobalNamespace/zzzz__TerrainAligner_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::TerrainAligner_AlignmentMode::TerrainAligner_AlignmentMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TerrainAligner_AlignmentMode::TerrainAligner_AlignmentMode()   {
}
constexpr ::GlobalNamespace::TerrainAligner_AlignmentMode  GlobalNamespace::TerrainAligner_AlignmentMode::Terrain{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::TerrainAligner_AlignmentMode  GlobalNamespace::TerrainAligner_AlignmentMode::Raycast{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::GlobalNamespace::TerrainAligner.get_samplePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::TerrainAligner::*)()>(&::GlobalNamespace::TerrainAligner::get_samplePosition)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803f2020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainAligner*>(),
                        {"get_samplePosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TerrainAligner.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TerrainAligner::*)()>(&::GlobalNamespace::TerrainAligner::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803f1f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainAligner*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TerrainAligner._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TerrainAligner::*)()>(&::GlobalNamespace::TerrainAligner::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainAligner*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::TerrainAligner::__cordl_internal_get_dontAlign()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dontAlign;
}
constexpr bool const& GlobalNamespace::TerrainAligner::__cordl_internal_get_dontAlign() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dontAlign;
}
constexpr void GlobalNamespace::TerrainAligner::__cordl_internal_set_dontAlign(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dontAlign = value;
}
constexpr ::GlobalNamespace::TerrainAligner_AlignmentMode& GlobalNamespace::TerrainAligner::__cordl_internal_get_alignmentMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alignmentMode;
}
constexpr ::GlobalNamespace::TerrainAligner_AlignmentMode const& GlobalNamespace::TerrainAligner::__cordl_internal_get_alignmentMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alignmentMode;
}
constexpr void GlobalNamespace::TerrainAligner::__cordl_internal_set_alignmentMode(::GlobalNamespace::TerrainAligner_AlignmentMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___alignmentMode = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::TerrainAligner::__cordl_internal_get_offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::TerrainAligner::__cordl_internal_get_offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr void GlobalNamespace::TerrainAligner::__cordl_internal_set_offset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offset = value;
}
inline ::UnityEngine::Vector3 GlobalNamespace::TerrainAligner::get_samplePosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainAligner*>(),
                        {"get_samplePosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GlobalNamespace::TerrainAligner::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainAligner*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TerrainAligner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainAligner*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TerrainAligner* GlobalNamespace::TerrainAligner::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TerrainAligner*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TerrainAligner::TerrainAligner()   {
}
