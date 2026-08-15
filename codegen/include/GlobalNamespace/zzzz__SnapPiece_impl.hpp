#pragma once
// IWYU pragma private; include "GlobalNamespace/SnapPiece.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__SnapPiece_def.hpp"
#include "GlobalNamespace/zzzz__SnapAnchor_def.hpp"
#include "GlobalNamespace/zzzz__SnapPiece_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SnapPiece_SnapAnchorData.get_targetAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SnapAnchor> (::GlobalNamespace::SnapPiece_SnapAnchorData::*)()>(&::GlobalNamespace::SnapPiece_SnapAnchorData::get_targetAnchor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1803f0510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnapPiece_SnapAnchorData>(),
                        {"get_targetAnchor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityW<::GlobalNamespace::SnapAnchor> GlobalNamespace::SnapPiece_SnapAnchorData::get_targetAnchor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnapPiece_SnapAnchorData>(),
                        {"get_targetAnchor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SnapAnchor>>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "snapAnchor", ty: "::UnityW<::GlobalNamespace::SnapAnchor>", modifiers: "", def_value: Some("{}") }, CppParam { name: "targetPiece", ty: "::UnityW<::GlobalNamespace::SnapPiece>", modifiers: "", def_value: Some("{}") }, CppParam { name: "targetAnchorIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotationOffset", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::SnapPiece_SnapAnchorData::SnapPiece_SnapAnchorData(::UnityW<::GlobalNamespace::SnapAnchor>  snapAnchor, ::UnityW<::GlobalNamespace::SnapPiece>  targetPiece, int32_t  targetAnchorIndex, ::UnityEngine::Vector3  rotationOffset) noexcept  {
this->snapAnchor = snapAnchor;
this->targetPiece = targetPiece;
this->targetAnchorIndex = targetAnchorIndex;
this->rotationOffset = rotationOffset;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SnapPiece_SnapAnchorData::SnapPiece_SnapAnchorData()   {
}
//  Writing Method size for method: ::GlobalNamespace::SnapPiece.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SnapPiece::*)()>(&::GlobalNamespace::SnapPiece::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x1803f0620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnapPiece*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnapPiece._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SnapPiece::*)()>(&::GlobalNamespace::SnapPiece::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnapPiece*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::SnapPiece::__cordl_internal_get_locked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___locked;
}
constexpr bool const& GlobalNamespace::SnapPiece::__cordl_internal_get_locked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___locked;
}
constexpr void GlobalNamespace::SnapPiece::__cordl_internal_set_locked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___locked = value;
}
constexpr ::ArrayW<::GlobalNamespace::SnapPiece_SnapAnchorData>& GlobalNamespace::SnapPiece::__cordl_internal_get_snapAnchorDatas()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapAnchorDatas;
}
constexpr ::ArrayW<::GlobalNamespace::SnapPiece_SnapAnchorData> const& GlobalNamespace::SnapPiece::__cordl_internal_get_snapAnchorDatas() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapAnchorDatas;
}
constexpr void GlobalNamespace::SnapPiece::__cordl_internal_set_snapAnchorDatas(::ArrayW<::GlobalNamespace::SnapPiece_SnapAnchorData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snapAnchorDatas = value;
}
inline void GlobalNamespace::SnapPiece::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnapPiece*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SnapPiece::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnapPiece*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SnapPiece* GlobalNamespace::SnapPiece::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SnapPiece*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SnapPiece::SnapPiece()   {
}
