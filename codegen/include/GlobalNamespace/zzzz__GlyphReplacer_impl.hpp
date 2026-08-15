#pragma once
// IWYU pragma private; include "GlobalNamespace/GlyphReplacer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GlyphReplacer_def.hpp"
#include "GlobalNamespace/zzzz__GlyphButtonType_def.hpp"
#include "GlobalNamespace/zzzz__GlyphControllerType_def.hpp"
#include "GlobalNamespace/zzzz__GlyphText_def.hpp"
#include "GlobalNamespace/zzzz__LocalizedText_def.hpp"
#include "Rewired/zzzz__ActionElementMap_def.hpp"
#include "Rewired/zzzz__AxisRange_def.hpp"
#include "Rewired/zzzz__Controller_def.hpp"
#include "Rewired/zzzz__Player_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GlyphReplacer.ReplaceGlyphTags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::GlobalNamespace::LocalizedText_MaterialType)>(&::GlobalNamespace::GlyphReplacer::ReplaceGlyphTags)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x1803e9940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlyphReplacer*>(),
                        {"ReplaceGlyphTags", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::LocalizedText_MaterialType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GlyphReplacer.MapIsBetter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Rewired::ActionElementMap*, ::Rewired::ActionElementMap*)>(&::GlobalNamespace::GlyphReplacer::MapIsBetter)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803e98c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlyphReplacer*>(),
                        {"MapIsBetter", {}, {::i2c::type_of<::Rewired::ActionElementMap*>(), ::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GlyphReplacer.GetBestMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ActionElementMap* (*)(::Rewired::Player*, ::Rewired::Controller*, int32_t, ::Rewired::AxisRange)>(&::GlobalNamespace::GlyphReplacer::GetBestMap)> {
  constexpr static std::size_t size = 0x6a0;
  constexpr static std::size_t addrs = 0x1803e82a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlyphReplacer*>(),
                        {"GetBestMap", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::Controller*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::AxisRange>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GlyphReplacer.GetGlyph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::LocalizedText_MaterialType, ::Rewired::Player*, ::Rewired::Controller*, int32_t, ::Rewired::AxisRange)>(&::GlobalNamespace::GlyphReplacer::GetGlyph)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1803e9640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlyphReplacer*>(),
                        {"GetGlyph", {}, {::i2c::type_of<::GlobalNamespace::LocalizedText_MaterialType>(), ::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::Controller*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::AxisRange>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GlyphReplacer.MapMatchesAxisRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Rewired::ActionElementMap*, ::Rewired::AxisRange)>(&::GlobalNamespace::GlyphReplacer::MapMatchesAxisRange)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803e98f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlyphReplacer*>(),
                        {"MapMatchesAxisRange", {}, {::i2c::type_of<::Rewired::ActionElementMap*>(), ::i2c::type_of<::Rewired::AxisRange>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GlyphReplacer.GetGlyphForMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GlyphText (*)(::Rewired::ActionElementMap*)>(&::GlobalNamespace::GlyphReplacer::GetGlyphForMap)> {
  constexpr static std::size_t size = 0x860;
  constexpr static std::size_t addrs = 0x1803e8de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlyphReplacer*>(),
                        {"GetGlyphForMap", {}, {::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GlyphReplacer.IsJoyStick0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Rewired::Controller*)>(&::GlobalNamespace::GlyphReplacer::IsJoyStick0)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803e9830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlyphReplacer*>(),
                        {"IsJoyStick0", {}, {::i2c::type_of<::Rewired::Controller*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GlyphReplacer.GetGlyphControllerType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GlyphControllerType (*)(::Rewired::Controller*)>(&::GlobalNamespace::GlyphReplacer::GetGlyphControllerType)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x1803e89c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlyphReplacer*>(),
                        {"GetGlyphControllerType", {}, {::i2c::type_of<::Rewired::Controller*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GlyphReplacer.GetButtonTypeForGenericGamepad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GlyphButtonType (*)(int32_t)>(&::GlobalNamespace::GlyphReplacer::GetButtonTypeForGenericGamepad)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803e8940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlyphReplacer*>(),
                        {"GetButtonTypeForGenericGamepad", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GlyphReplacer::setStaticF_results(::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*, "results", ::GlobalNamespace::GlyphReplacer*>(std::forward<::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*>(value));
}
inline ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>* GlobalNamespace::GlyphReplacer::getStaticF_results()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*, "results", ::GlobalNamespace::GlyphReplacer*>();
}
inline ::StringW GlobalNamespace::GlyphReplacer::ReplaceGlyphTags(::StringW  text, ::GlobalNamespace::LocalizedText_MaterialType  materialType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlyphReplacer*>(),
                        {"ReplaceGlyphTags", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::LocalizedText_MaterialType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, text, materialType);
}
inline bool GlobalNamespace::GlyphReplacer::MapIsBetter(::Rewired::ActionElementMap*  mapA, ::Rewired::ActionElementMap*  mapB)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlyphReplacer*>(),
                        {"MapIsBetter", {}, {::i2c::type_of<::Rewired::ActionElementMap*>(), ::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mapA, mapB);
}
inline ::Rewired::ActionElementMap* GlobalNamespace::GlyphReplacer::GetBestMap(::Rewired::Player*  player, ::Rewired::Controller*  controller, int32_t  actionId, ::Rewired::AxisRange  axisRange)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlyphReplacer*>(),
                        {"GetBestMap", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::Controller*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::AxisRange>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ActionElementMap*>(nullptr, ___internal_method, player, controller, actionId, axisRange);
}
inline ::StringW GlobalNamespace::GlyphReplacer::GetGlyph(::GlobalNamespace::LocalizedText_MaterialType  materialType, ::Rewired::Player*  player, ::Rewired::Controller*  controller, int32_t  actionId, ::Rewired::AxisRange  axisRange)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlyphReplacer*>(),
                        {"GetGlyph", {}, {::i2c::type_of<::GlobalNamespace::LocalizedText_MaterialType>(), ::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<::Rewired::Controller*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::AxisRange>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, materialType, player, controller, actionId, axisRange);
}
inline bool GlobalNamespace::GlyphReplacer::MapMatchesAxisRange(::Rewired::ActionElementMap*  map, ::Rewired::AxisRange  axisRange)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlyphReplacer*>(),
                        {"MapMatchesAxisRange", {}, {::i2c::type_of<::Rewired::ActionElementMap*>(), ::i2c::type_of<::Rewired::AxisRange>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, map, axisRange);
}
inline ::GlobalNamespace::GlyphText GlobalNamespace::GlyphReplacer::GetGlyphForMap(::Rewired::ActionElementMap*  map)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlyphReplacer*>(),
                        {"GetGlyphForMap", {}, {::i2c::type_of<::Rewired::ActionElementMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GlyphText>(nullptr, ___internal_method, map);
}
inline bool GlobalNamespace::GlyphReplacer::IsJoyStick0(::Rewired::Controller*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlyphReplacer*>(),
                        {"IsJoyStick0", {}, {::i2c::type_of<::Rewired::Controller*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, controller);
}
inline ::GlobalNamespace::GlyphControllerType GlobalNamespace::GlyphReplacer::GetGlyphControllerType(::Rewired::Controller*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlyphReplacer*>(),
                        {"GetGlyphControllerType", {}, {::i2c::type_of<::Rewired::Controller*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GlyphControllerType>(nullptr, ___internal_method, controller);
}
inline ::GlobalNamespace::GlyphButtonType GlobalNamespace::GlyphReplacer::GetButtonTypeForGenericGamepad(int32_t  elementId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlyphReplacer*>(),
                        {"GetButtonTypeForGenericGamepad", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GlyphButtonType>(nullptr, ___internal_method, elementId);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GlyphReplacer::GlyphReplacer()   {
}
