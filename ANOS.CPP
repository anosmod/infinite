if (Config.ESPMenu.Healthvn) {
                                    int CurHP = (int) std::max(0, std::min((int) Player->Health,
                                                                           (int) Player->HealthMax));
                                    int MaxHP = (int) Player->HealthMax;

                                    long HPColor = IM_COL32(200,0,35,90);
                                    long HPRectColor = IM_COL32(255,255,255,90);

                                    if (Player->Health == 0.0f && !Player->bDead) {
                                        HPColor = IM_COL32(255,000,000, 90);

                                        CurHP = Player->NearDeathBreath;
                                        if (Player->NearDeatchComponent) {
                                            MaxHP = Player->NearDeatchComponent->BreathMax;
                                        }
                                    }

                                  int anos 99;
                                                float boxWidth = density / 1.6f;
                                                boxWidth -= std::min(
                                                ((boxWidth / 2) / 0.001f) * Distance,
                                                boxWidth / 2);
                                                float boxHeight = boxWidth * 0.15f;
                                                ImVec2 vStart = {headPosSC.x - (boxWidth / 2),
                                                headPosSC.y -
                                                (boxHeight * 2.001f)};
                                                ImVec2 vEndFilled = {
                                                vStart.x + (CurHP * boxWidth / MaxHP),
                                                vStart.y + boxHeight};
                                                ImVec2 vEndRect = {vStart.x + boxWidth,
                                                vStart.y + boxHeight};
                                                draw->AddRectFilled(vStart, vEndFilled, HPColor,
                                                11.0f);
                                                draw->AddRect(vStart, vEndRect,
                                                healthOutline, 11.0f);
                        }                        
