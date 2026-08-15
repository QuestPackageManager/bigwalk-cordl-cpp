#pragma once
// IWYU pragma private; include "MA/Flora/TerrainDetailPlaceholder.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "MA/Flora/zzzz__TerrainDetailPlaceholder_def.hpp"
#include "UnityEngine/zzzz__BillboardRenderer_def.hpp"
//  Writing Method size for method: ::MA::Flora::TerrainDetailPlaceholder.get_BillboardRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::BillboardRenderer> (::MA::Flora::TerrainDetailPlaceholder::*)()>(&::MA::Flora::TerrainDetailPlaceholder::get_BillboardRenderer)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18150e7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailPlaceholder*>(),
                        {"get_BillboardRenderer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailPlaceholder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainDetailPlaceholder::*)()>(&::MA::Flora::TerrainDetailPlaceholder::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailPlaceholder*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::BillboardRenderer>& MA::Flora::TerrainDetailPlaceholder::__cordl_internal_get_m_BillboardRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BillboardRenderer;
}
constexpr ::UnityW<::UnityEngine::BillboardRenderer> const& MA::Flora::TerrainDetailPlaceholder::__cordl_internal_get_m_BillboardRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BillboardRenderer;
}
constexpr void MA::Flora::TerrainDetailPlaceholder::__cordl_internal_set_m_BillboardRenderer(::UnityW<::UnityEngine::BillboardRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BillboardRenderer = value;
}
inline ::UnityW<::UnityEngine::BillboardRenderer> MA::Flora::TerrainDetailPlaceholder::get_BillboardRenderer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailPlaceholder*>(),
                        {"get_BillboardRenderer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::BillboardRenderer>>(this, ___internal_method);
}
inline void MA::Flora::TerrainDetailPlaceholder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailPlaceholder*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::MA::Flora::TerrainDetailPlaceholder* MA::Flora::TerrainDetailPlaceholder::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::TerrainDetailPlaceholder*>());
}
// Ctor Parameters []
constexpr ::MA::Flora::TerrainDetailPlaceholder::TerrainDetailPlaceholder()   {
}
