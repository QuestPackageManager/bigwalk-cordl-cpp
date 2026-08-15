#pragma once
// IWYU pragma private; include "GlobalNamespace/BiomeRegion.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__BiomeRegion_def.hpp"
#include "GlobalNamespace/zzzz__FlatSpline_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BiomeRegion.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BiomeRegion::*)()>(&::GlobalNamespace::BiomeRegion::GetHashCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180323940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BiomeRegion*>(),
                    {::i2c::class_of<::GlobalNamespace::BiomeRegion*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BiomeRegion._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BiomeRegion::*)()>(&::GlobalNamespace::BiomeRegion::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180323950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BiomeRegion*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& GlobalNamespace::BiomeRegion::__cordl_internal_get_GUIColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GUIColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::BiomeRegion::__cordl_internal_get_GUIColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GUIColor;
}
constexpr void GlobalNamespace::BiomeRegion::__cordl_internal_set_GUIColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GUIColor = value;
}
constexpr ::StringW& GlobalNamespace::BiomeRegion::__cordl_internal_get_BiomeName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BiomeName;
}
constexpr ::StringW const& GlobalNamespace::BiomeRegion::__cordl_internal_get_BiomeName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BiomeName;
}
constexpr void GlobalNamespace::BiomeRegion::__cordl_internal_set_BiomeName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BiomeName = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FlatSpline*>*& GlobalNamespace::BiomeRegion::__cordl_internal_get_FlatSplines()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FlatSplines;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FlatSpline*>* const& GlobalNamespace::BiomeRegion::__cordl_internal_get_FlatSplines() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FlatSplines;
}
constexpr void GlobalNamespace::BiomeRegion::__cordl_internal_set_FlatSplines(::System::Collections::Generic::List_1<::GlobalNamespace::FlatSpline*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FlatSplines = value;
}
inline int32_t GlobalNamespace::BiomeRegion::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BiomeRegion*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::BiomeRegion::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BiomeRegion*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BiomeRegion* GlobalNamespace::BiomeRegion::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BiomeRegion*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BiomeRegion::BiomeRegion()   {
}
